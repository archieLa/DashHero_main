#ifndef DASH_HERO_TEST_APP_CAMERASIMIDENTITY_H
#define DASH_HERO_TEST_APP_CAMERASIMIDENTITY_H

#include <string>

#include "IAppIdentity.h"


namespace DashHero::TestApp
{

class CameraSimIdentity : public IAppIdentity
{

public:
    CameraSimIdentity(
        const std::string& gpxFilePath,
        unsigned int gpsUpdateIntervalMs);
    
    virtual ~CameraSimIdentity();
    virtual void execute() override;

private:
    std::string m_gpxFilePath;
    unsigned int m_gpsUpdateIntervalMs;

};

}
#endif