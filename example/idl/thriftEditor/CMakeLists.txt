# Copyright: (C) 2014 Istituto Italiano di Tecnologia (IIT)
# Authors: Paul Fitzpatrick
# CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT

cmake_minimum_required(VERSION 3.0)

find_package(YARP REQUIRED)

yarp_idl_to_dir(settings.thrift ${CMAKE_BINARY_DIR}/settings SRC HDR INCLUDES)

include_directories(${INCLUDES})
add_executable(main main.cpp ${SRC} ${HDR})
target_link_libraries(main ${YARP_LIBRARIES})
