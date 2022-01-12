cmake_minimum_required(VERSION 3.20)
project(Cly C)

file(GLOB Test
        "tests/*.c"
        )
file(GLOB Cly
        "lib/cly/*.c"
        )
file(GLOB ClyH
        "include/*.h"
        )

set(CMAKE_C_STANDARD 99)

include_directories("include")
add_executable(Cly ${Test} ${Cly} ${ClyH})
