#DashHero test app
Test app used to aid development and testing of DashHero desktop and camera/phone apps. App serves three different purposes and its identify is selectable by command line arguments.

##App identitites:
- DashHero camera simulator
    - Description: This option simulates the behavior of DashHero camera/phone app. Upon receiving off start track message, it will read GPS coordinates from pre-recorded .gpx file and publish them. Publishing frequency can be configured by command line argument
    - Startup configuration options:
        - **[-o c] required** Configures app to be DashHero camera simulator
        - **[-g path] required** Path to .gpx file to read pre-recorded coordinates from
        - **[-i interval value] optional. Default value: 1000** Publishing interval in milliseconds
    - Application start example:
        - **`./DashHeroTest -o c -g /tmp/test.gpx -i 1000`**
- DashHero desktop simulator
    - Description: This option simulates the behavior of DashHero command/desktop app. This behavior allows the app to act as logger, outputing received coordinates to a file which can aid in verification and debugging process. Additionaly the app accepts user input to start/stop tracking (this allows is to be used without main DashHero desktop app to initiaite tracking), or to subscribe to active tracking iniaited by main DashHero desktop app
    - Startup configuration options:
        - **[-o d] required** Configures app to be DashHero desktop app simulator
        - **[-l path] optional. Default value: current dir** Path to log file for storing received gps coordinates
    - Application start example:
        - **`./DashHeroTest -o d c -l /tmp/log`**
- DashHero repeater
    - Description: This option acts as a repeater of published active tracking messages. It subscribes to active tracking messages, based on license plate argument provided by the user. When message is received, the app will modify (time stamp and/or coordinates) and republish it. This allows the system to be tested as if two (or more depending on number of instances of the app running) DashHero camera apps were present and actively tracking with only single instance of DashHero camera app doing real plate detection and tracking.
    - Startup configuration opions:
        - **[-o r] required** Configures app to be DashHero repeater
        - **[-t ms_offset_value] optional. Default value: 1000ms** Specifies how the app should modify timestamp received from active tracking message. Provided offset will be added to received timestamp
        -- **[-c offset_value] optional. Default value 0** Specifies how the app should modify GPS coordinates received from active tracking message. The app will modify received longitude and latitude by adding provided offset
    - Application start example:
        **`./DashHeroTest -o r -c 5`** 

## Building
- ### Dependencies
    - Eclipse Paho MQTT C++ Client Library
        - https://github.com/eclipse/paho.mqtt.cpp
        - Cmake depends on the dynamic library being present in the system path. libpaho-mqttpp3 and libssl

## Running
- ### Dependencies
    - Active MQTT server