cmake_minimum_required(VERSION 3.21)
project(apcsp C)

set(CMAKE_C_STANDARD 17)

include_directories(. ./include "C:/src/vcpkg/installed/x64-windows/include")

add_executable(
    game
    main.c
    )