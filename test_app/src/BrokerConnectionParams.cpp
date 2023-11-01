#include "BrokerConnectionParams.h"

DashHero::TestApp::BrokerConnectionParams& DashHero::TestApp::BrokerConnectionParams::get_broker_conn_params
()
{
    static BrokerConnectionParams params;
    return params;
}
