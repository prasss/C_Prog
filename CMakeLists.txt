cmake_minimum_required(VERSION 3.0.0)
project(functPtr_proj VERSION 0.1.0)

#include(CTest)
#enable_testing()

include_directories(src)
set(SOURCES src/main.c src/funcPtrCalc.c)

add_executable(functPtr_proj ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
