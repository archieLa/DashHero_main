cmake_minimum_required(VERSION 3.5)
project(DashHero_testApp)

#import PahoMqttCpp library
find_package(PahoMqttCpp REQUIRED)

#set(PAHO_MQTT_INCLUDE_PATH "")
#get_target_property(PAHO_MQTT_INCLUDE_PATH PahoMqttCpp::paho-mqttpp3 INTERFACE_INCLUDE_DIRECTORIES)

set(APP_SRC_DIR "${CMAKE_SOURCE_DIR}/src")

set(LIB_SRC_DIR "${CMAKE_SOURCE_DIR}/src/lib")

set(APP_SRC
"${APP_SRC_DIR}/main.cpp"
"${LIB_SRC_DIR}/CLI11.hpp")

add_executable(
    DashHero_testApp
    ${APP_SRC})

target_compile_features(DashHero_testApp PRIVATE cxx_std_17)
target_include_directories(DashHero_testApp PRIVATE "${CMAKE_SOURCE_DIR}/src/lib")
target_link_libraries(DashHero_testApp PahoMqttCpp::paho-mqttpp3)









