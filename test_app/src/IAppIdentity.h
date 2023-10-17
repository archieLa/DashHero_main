#ifndef DASH_HERO_TEST_APP_IAPPIDENTITY_H
#define DASH_HERO_TEST_APP_IAPPIDENTITY_H

namespace DashHero::TestApp
{

class IAppIdentity
{
private:
    /* data */
public:
    IAppIdentity() = default;
    virtual ~IAppIdentity() = default;
    virtual void execute() = 0;

};

}
#endif