#
# Macros Library
#
# Copyright (C) 2020, Hensoldt Cyber GmbH
#

cmake_minimum_required(VERSION 3.17)

# Add these, so we can access FOR_EACH macros from LibMacros/ via camkes files
if (SDK_USE_CAMKES)
    CAmkESAddCPPInclude("include")
endif()

#-------------------------------------------------------------------------------
project(lib_macros C)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        "include"
)

target_link_libraries(${PROJECT_NAME}
    INTERFACE
        lib_debug
)
