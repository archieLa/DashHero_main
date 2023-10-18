#ifndef DASH_HERO_TEST_APP_APPIDENTITYFACTORY_H
#define DASH_HERO_TEST_APP_APPIDENTITYFACTORY_H

#include <memory>
#include "IAppIdentity.h"

namespace DashHero::TestApp {

enum class AppIdentity {
    kCameraSim,
    kDappSim,
    kRepeater
};



template <class... Args>
std::unique_ptr<IAppIdentity> create_app_identity
(
    AppIdentity type, Args&&... args
)
{
    switch (type)
    {
        case AppIdentity::kCameraSim:
        {
            // return camera sim pointer
        }
        case 

    }
}

}




#endif 