#ifndef DASH_HERO_TEST_APP_BROKERCONNECTIONPARAMS_H
#define DASH_HERO_TEST_APP_BROKERCONNECTIONPARAMS_H

#include <string>

namespace DashHero::TestApp
{  

struct BrokerConnectionParams
{
    public: 
        static BrokerConnectionParams& get_broker_conn_params();

        BrokerConnectionParams(const BrokerConnectionParams&) = delete;
        BrokerConnectionParams(BrokerConnectionParams&&) = delete;
        BrokerConnectionParams& operator=(const BrokerConnectionParams&) = delete;
        BrokerConnectionParams& operator=(BrokerConnectionParams&&) = delete;
        
        std::string serverAddr;
        std::string username;
        std::string password;
        std::string keyStoreFile;
        std::string trustStoreFile;

    private:
        BrokerConnectionParams() = default;

};


}

#endif