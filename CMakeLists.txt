cmake_minimum_required(VERSION 3.17.0)

project(lizzlang)

file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "inc/*.hpp")

include_directories("inc/")

add_executable(lizzlang ${SOURCES} ${HEADERS})

set_target_properties(lizzlang PROPERTIES
                        CXX_STANDARD 17
                        CXX_STANDARD_REQUIRED OFF
                        CXX_EXTENSIONS OFF
                        RUNTIME_OUTPUT_DIRECTORY "bin/"
)
