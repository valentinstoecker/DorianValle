cmake_minimum_required(VERSION 3.15)
project(DorianValle)
include_directories(${PROJECT_SOURCE_DIR}/include)
file(GLOB include_SRC
     "include/*.h"
     "include/*.c"
)
add_executable(main main.c ${include_SRC})
