#include "CameraSimIdentity.h"

DashHero::TestApp::CameraSimIdentity::CameraSimIdentity
(
    const std::string& gpxFilePath,
    unsigned int gpsUpdateIntervalMs
):
m_gpxFilePath(gpxFilePath),
m_gpsUpdateIntervalMs(gpsUpdateIntervalMs)
{    
}


DashHero::TestApp::CameraSimIdentity::~CameraSimIdentity
()
{ 
}


void DashHero::TestApp::CameraSimIdentity::execute
(
)
{    
    // Subscribe to start tracking message 
    // Based on start tracking message, open a gpx file
    // Read and publish the locations
    // Once reading from file is finished exit the app
}