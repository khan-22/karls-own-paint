cmake_minimum_required(VERSION 3.8.0)

project(kop)

set(kop_VERSION_MAJOR 0)
set(kop_VERSION_MINOR 1)
set(kop_VERSION_PATCH 0)
set(kop_VERSION ${kop_VERSION_MAJOR}.${kop_VERSION_MINOR}.${kop_VERSION_PATCH})

# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin")
# set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")
# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib")

add_subdirectory(deps/glew)

add_subdirectory(src)
