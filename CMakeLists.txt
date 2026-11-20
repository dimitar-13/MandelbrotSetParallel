cmake_minimum_required (VERSION 3.16)

set(PROJECT_NAME "MandelbrotPararel")

project (${PROJECT_NAME})

find_package(OpenMP REQUIRED)

add_executable (${PROJECT_NAME} "src/EntryPoint.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

add_subdirectory("src/generators")

target_link_libraries(${PROJECT_NAME} PRIVATE OpenMP::OpenMP_CXX)