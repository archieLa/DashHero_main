#include "DappSimIdentity.h"

DashHero::TestApp::DappSimIdentity::DappSimIdentity
(
    const std::string& logFilePath
):
m_logFilePath(logFilePath)
{

}


DashHero::TestApp::DappSimIdentity::~DappSimIdentity
()
{    
}


void DashHero::TestApp::DappSimIdentity::execute
()
{
    // Provide for user input to start and stop tracking 
    // a specific license plate. And then subscribe to that topic
    // Once the message is received log the message to provide log file
    // Also allow for sending stop tracking message
    // and quitting the application
}