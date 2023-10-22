cmake_minimum_required(VERSION 3.5)
project(DashHero_testApp)

#import PahoMqttCpp library
find_package(PahoMqttCpp REQUIRED)

set(APP_SRC_DIR "${CMAKE_SOURCE_DIR}/src")
set(LIB_SRC_DIR "${CMAKE_SOURCE_DIR}/src/lib")

set(APP_SRC
"${APP_SRC_DIR}/main.cpp"
"${APP_SRC_DIR}/CameraSimIdentity.h"
"${APP_SRC_DIR}/CameraSimIdentity.cpp"
"${APP_SRC_DIR}/DappSimIdentity.h"
"${APP_SRC_DIR}/DappSimIdentity.cpp"
"${APP_SRC_DIR}/RepeaterIdentity.h"
"${APP_SRC_DIR}/RepeaterIdentity.cpp"
"${LIB_SRC_DIR}/CLI11.hpp")

add_executable(
    DashHero_testApp
    ${APP_SRC})

target_compile_features(DashHero_testApp PRIVATE cxx_std_17)
target_include_directories(DashHero_testApp PRIVATE "${CMAKE_SOURCE_DIR}/src/lib")
target_link_libraries(DashHero_testApp PahoMqttCpp::paho-mqttpp3)









