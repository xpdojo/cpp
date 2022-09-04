# CMake 프로그램의 최소 버전
# https://cmake.org/cmake/help/v3.23/command/cmake_minimum_required.html
cmake_minimum_required(VERSION 3.23)

SET(PROJECT_NAME cpp-template)

# C 프로젝트는 C
# C++ 프로젝트는 CXX
# C++ 표준 버전을 지정
# https://cmake.org/cmake/help/v3.23/command/set.html
# https://cmake.org/cmake/help/v3.23/manual/cmake-language.7.html#cmake-language-variables
# https://cmake.org/cmake/help/v3.23/manual/cmake-compile-features.7.html#manual:cmake-compile-features(7)
# set(CMAKE_CXX_STANDARD 14)
# set(CMAKE_CXX_COMPILER g++)
if (APPLE)
  message(STATUS ">>> Mac")
elseif (UNIX AND NOT CYGWIN)
  message(STATUS ">>> Linux")
  # set(CMAKE_MAKE_PROGRAM "make")
  # set(CMAKE_GENERATOR "Unix Makefiles")
elseif (WIN32)
  message(STATUS ">>> Windows")
  # set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)
  # set(CMAKE_MAKE_PROGRAM "mingw32-make")
  # set(CMAKE_GENERATOR "MinGW Makefiles")
endif ()

set(CMAKE_BUILD_TYPE Debug)

# 프로젝트 정보
# https://cmake.org/cmake/help/v3.23/command/project.html
project(
    cpp
    VERSION 0.1
    LANGUAGES CXX
    DESCRIPTION "Demo Project"
)

# 빌드 파일들이 생성될 디렉토리를 지정해줍니다.
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/build)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(CXX_STANDARD_REQUIRED 14)

# CMakeLists.txt in subdirectory
add_subdirectory(lib)
add_subdirectory(src)
add_subdirectory(test)

# 프로젝트에 속한 테스트 파일
# https://cmake.org/cmake/help/v3.23/command/add_test.html
# https://cmake.org/cmake/help/v3.23/module/CTest.html
# https://gitlab.kitware.com/cmake/community/-/wikis/doc/ctest/Testing-With-CTest
# include(CTest)
enable_testing()

add_test(NAME test-1 COMMAND test/test_main.cpp)
add_test(NAME test-2 COMMAND test/utility_test.cpp)
