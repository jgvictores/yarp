# Copyright (C) 2014 Istituto Italiano di Tecnologia (IIT)
# Author: Alberto Cardellino <alberto.cardellino@iit.it>
# CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT


set(rmc_core_srcs src/devices/RemoteControlBoard/RemoteControlBoard.cpp)

set(rmc_core_hrds src/devices/RemoteControlBoard/RemoteControlBoard.h)


set(rmc_core_srcs ${rmc_core_srcs}
                  src/devices/RemoteControlBoard/stateExtendedReader.cpp)

set(rmc_core_hrds ${rmc_core_hrds}
                  src/devices/RemoteControlBoard//stateExtendedReader.hpp)


# using PARENT_SCOPE to make files visible from upper level

set(rmc_core_srcs ${rmc_core_srcs} PARENT_SCOPE)
set(rmc_core_hrds ${rmc_core_hrds} PARENT_SCOPE)


set(rmc_core_incl_dirs ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
