cmake_minimum_required(VERSION 3.15)
# Appends the cmake/modules path to MAKE_MODULE_PATH variable.
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake/modules ${CMAKE_MODULE_PATH})

include(GetVersion)
include(${CMAKE_BINARY_DIR}/conan_paths.cmake OPTIONAL)

get_version(PROJECT_VERSION)

project(MyLibrary 
    LANGUAGES CXX
    VERSION ${PROJECT_VERSION})

add_subdirectory(src)

include(CTest)
set(CMAKE_CTEST_ARGUMENTS "--verbose")
if(BUILD_TESTING)
    add_subdirectory(test)
endif()
