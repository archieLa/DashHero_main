#ifndef DASH_HERO_TEST_APP_REPEATERIDENTITY_H
#define DASH_HERO_TEST_APP_REPEATERIDENTITY_H

#include "BrokerConnectionParams.h"
#include "IAppIdentity.h"


namespace DashHero::TestApp
{

class RepeaterIdentity : public IAppIdentity
{

public:
    RepeaterIdentity(
        unsigned int timestampOffsetMs,
        double gpsCoordinatesOffset);
    
    virtual ~RepeaterIdentity();
    virtual void execute() override;

private:
    unsigned int m_timestampOffsetMs;
    double m_gpsCoordinatesOffset;

};

}
#endif