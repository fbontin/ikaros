# Install script for directory: /home/filip/ikaros/Source/Modules/UtilityModules

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Abs/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Add/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/ArrayToMatrix/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Arbiter/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Arctan/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/ArgMax/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Average/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Constant/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Counter/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Delay/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Distance/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Divide/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/FunctionGenerator/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Gate/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Histogram/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/HypotenuseLength/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Integrator/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/LinearSplines/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/MatrixMultiply/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Max/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Maxima/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Fuse/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Mean/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Min/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Multiply/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Noise/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Normalize/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/OuterProduct/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Polynomial/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Product/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Randomizer/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/RotationConverter/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Scale/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Select/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/SelectMax/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Softmax/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Submatrix/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Subtract/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Sum/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Sweep/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Transform/cmake_install.cmake")
  include("/home/filip/ikaros/Source/Modules/UtilityModules/Threshold/cmake_install.cmake")

endif()
