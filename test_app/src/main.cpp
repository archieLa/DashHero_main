#include <CLI11.hpp>
#include <algorithm>
#include <mqtt/async_client.h>

#include "IAppIdentity.h"
#include "CameraSimIdentity.h"
#include "DappSimIdentity.h"
#include "RepeaterIdentity.h"


int main(int argc, char **argv) {

CLI::App argsParses{"DashHero Test App"};

// App identity selection
bool cameraSim{false};
argsParses.add_flag(
    "-c",
    cameraSim,
    "Configures app to be DashHero camera simulator");

bool desktopAppSim{false};
argsParses.add_flag(
    "-d",
    cameraSim,
    "Configures app to be DashHero desktop app simulator");

bool repeater{false};
argsParses.add_flag(
    "-r",
    cameraSim,
    "Configures app to be DashHero repeater");

// Camera simulator parameters
std::string gpxFileOption("");
argsParses.add_option("-g", gpxFileOption,
 "File path to recorded .gpx file to read from")
 ->needs("-c")
 ->check(CLI::ExistingFile);

unsigned int gpsUpdateIntervalMs = 1000;
argsParses.add_option("-i",
 gpsUpdateIntervalMs,
"Parameter specifying how often gps coordinate should be read from .gpx file "
"and published")->needs("-c");

// Desktop app simulator parameters
std::string logFile("DashHeroLog.log");
argsParses.add_option(
    "-l",
    logFile,
    "File path and name to log received coordinates")->needs("-d");

// Repeater app parameters
unsigned int timestampOffsetMs = 1000;
argsParses.add_option(
    "-t",
    timestampOffsetMs,
    "Specifies ms value that will be added to received timestamps")->needs("-r");

double gpsCoordinatesOffset = 0;
argsParses.add_option(
    "-p",
    gpsCoordinatesOffset,
    "Specifies value that will be added to longitue and latitude of receivied gps coordinates")
    ->needs("-r");    

try 
{
    CLI11_PARSE(argsParses, argc, argv);
    
    // Validate that at least one and only one app identity flag is present
    if (cameraSim || desktopAppSim || repeater)
    {
        std::vector<bool> uniqueOptionValidator{cameraSim, desktopAppSim, repeater};
        
        if (std::count(
            uniqueOptionValidator.begin(),
            uniqueOptionValidator.end(),
            true) != 1){
                throw(CLI::ValidationError("More than one app identity options provided"));
            }
    }
    else
    {
        throw(CLI::ValidationError("App identity flag not provided"));   
    }
}
catch (const CLI::Error& err)
{
    argsParses.exit(err);
    return EXIT_FAILURE;
}

std::unique_ptr<DashHero::TestApp::IAppIdentity> appIdentity;
// Configure the app identity based on the flags
if (cameraSim)
{
    appIdentity.reset(new DashHero::TestApp::CameraSimIdentity(gpxFileOption, gpsUpdateIntervalMs));
}
else if (desktopAppSim) 
{
    appIdentity.reset(new DashHero::TestApp::DappSimIdentity(logFile));
}
else
{
    appIdentity.reset(new DashHero::TestApp::RepeaterIdentity(timestampOffsetMs, gpsCoordinatesOffset));
}

appIdentity->execute();

return EXIT_SUCCESS;

}