cmake_minimum_required(VERSION 3.5)
project(DashHero_testApp)

set(APP_SRC_DIR "${CMAKE_SOURCE_DIR}/src")

set(LIB_SRC_DIR "${CMAKE_SOURCE_DIR}/src/lib")

set(APP_SRC
"${APP_SRC_DIR}/main.cpp"
"${LIB_SRC_DIR}/CLI11.hpp")

add_executable(
    DashHero_testApp
    ${APP_SRC})

target_include_directories(DashHero_testApp PRIVATE "${CMAKE_SOURCE_DIR}/src/lib")
target_compile_features(DashHero_testApp PRIVATE cxx_std_17)






