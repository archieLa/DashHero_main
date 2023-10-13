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
        - **`./DashHeroTest -d c -l /tmp/log`**
- DashHero repeater
    - Description: This option 

## Building
- ### Dependencies
    - Eclipse Paho MQTT C++ Client Library
        - https://github.com/eclipse/paho.mqtt.cpp
        - Cmake depends on the dynamic library being present in the system path, and built with SSL option

## Running
- ### Dependencies
    - ACtive MQTT server