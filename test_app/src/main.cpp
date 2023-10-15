#include <CLI11.hpp>

int main(int argc, char **argv) {

CLI::App argsParses{"DashHero Test App"};

// Need to make this option required
char appIdentityOption;
argsParses.add_option("-o", appIdentityOption, "");

// Need to all the other option and fiute out how to add
// option that depend on each other
std::string gpxFile;
argsParses.add_option("-g", appIdentityOption, "");





try 
{
    CLI11_PARSE(argsParses, argc, argv);
}
catch (const CLI::ParseError& err)
{
    argsParses.exit(err);
}



}