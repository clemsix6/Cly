cmake_minimum_required(VERSION 3.20)
project(Cly C)

file(GLOB Src
        "src/*.c"
        )
file(GLOB ClyString
        "lib/cly/cly_string/*.c"
        )
file(GLOB ClyLinkedList
        "lib/cly/cly_linked_list/*.c"
        )
file(GLOB ClyH
        "include/*.h"
        )

set(CMAKE_C_STANDARD 99)

include_directories("include")
add_executable(Cly ${Src} ${ClyString} ${ClyLinkedList} ${ClyH})
