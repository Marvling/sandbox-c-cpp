cmake_minimum_required(VERSION 3.17.3)
project(raylib-sandbox)

set(CMAKE_C_STANDARD 11)

include_directories(.)
link_directories(.)

add_executable(raylib-sandbox example.c)

target_link_libraries(raylib-sandbox PRIVATE
    "-framework CoreVideo"
    "-framework IOKit"
    "-framework Cocoa"
    "-framework GLUT"
    "-framework OpenGL"
    libraylib.a
)
