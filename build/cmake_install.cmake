# Install script for directory: /Users/zhanbincheng/Downloads/llvm3/llvm

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Applications/Xcode.app/Contents/Developer")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "llvm-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/Users/zhanbincheng/Downloads/llvm3/llvm/include/llvm"
    "/Users/zhanbincheng/Downloads/llvm3/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/license\\.txt$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "llvm-headers" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/Users/zhanbincheng/Downloads/llvm3/build/include/llvm"
    "/Users/zhanbincheng/Downloads/llvm3/build/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/cmakefiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "cmake-exports" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/llvm" TYPE FILE FILES "/Users/zhanbincheng/Downloads/llvm3/build/lib/cmake/llvm/LLVMConfigExtensions.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/zhanbincheng/Downloads/llvm3/build/lib/Demangle/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/lib/Support/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/lib/TableGen/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/TableGen/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/include/llvm/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/lib/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/FileCheck/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/PerfectShuffle/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/count/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/not/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/yaml-bench/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/projects/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/tools/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/runtimes/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/docs/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/cmake/modules/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/llvm-lit/cmake_install.cmake")
  include("/Users/zhanbincheng/Downloads/llvm3/build/utils/llvm-locstats/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/zhanbincheng/Downloads/llvm3/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
