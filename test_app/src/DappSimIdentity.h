#ifndef DASH_HERO_TEST_APP_DAPPSIMIDENTITY_H
#define DASH_HERO_TEST_APP_DAPPSIMIDENTITY_H

#include <string>

#include "BrokerConnectionParams.h"
#include "IAppIdentity.h"

namespace DashHero::TestApp
{

class DappSimIdentity : public IAppIdentity
{

public:
    DappSimIdentity(
        const std::string& logFilePath);
    
    virtual ~DappSimIdentity();
    virtual void execute() override;

private:
    std::string m_logFilePath;

};

}
#endif