#include "RepeaterIdentity.h"

#include <iostream>

DashHero::TestApp::RepeaterIdentity::RepeaterIdentity
(
    unsigned int timestampOffsetMs,
    double gpsCoordinatesOffset
):
m_timestampOffsetMs(timestampOffsetMs),
m_gpsCoordinatesOffset(gpsCoordinatesOffset)
{
}


DashHero::TestApp::RepeaterIdentity::~RepeaterIdentity
()
{    
}


void DashHero::TestApp::RepeaterIdentity::execute
() 
{
    // Printout app message
    // Configure the subscriber to subscribe to start tracking message
    // and to stop tracking message
    // Once start tracking message is received subscribe to active tracking
    // from it and republish modified coordinates. Once
    // stop tracking is received stop republishing
    // Also, accept parameter to quit the app
}

