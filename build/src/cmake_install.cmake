# Install script for directory: /Users/abelani/moos-ivp-abelani/src

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/lib_behaviors-test/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pXRelayTest/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pExampleApp/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pOdometry/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pFactor/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pFactorTest/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pCommunicationAngle/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pPointAssign/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pGenPath/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/uFldHazardMngr/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/pHazardPath/cmake_install.cmake")
  INCLUDE("/Users/abelani/moos-ivp-abelani/build/src/sandbox/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

