cmake_minimum_required(VERSION 3.28)
project(GDS)

set(CMAKE_CXX_STANDARD 20)

# Include directories for GDS library
include_directories(include)

# Add source files
set(SOURCES
        src/main.cpp
        src/List.cpp
)

# Create MathG library
add_library(GDS ${SOURCES}
        include/List.h)

add_executable(main src/main.cpp)

target_link_libraries(main GDS)

