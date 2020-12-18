cmake_minimum_required(VERSION 3.15)
project(DorianValle)
file(GLOB include_SRC
     "include/*.h"
     "include/*.c"
)
file(GLOB test_SRC
     "test/*.h"
     "test/*.c"
)
add_executable(test test.c ${include_SRC} ${test_SRC})
add_executable(main main.c ${include_SRC})
target_link_libraries(main m)
target_link_libraries(test m)
target_compile_options(main PUBLIC -Wall -Werror -Wextra)
target_compile_options(test PUBLIC -Wall -Werror -Wextra)
