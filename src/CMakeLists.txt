project (PierwszyProgram)
add_executable(Laborka main.cpp)
option (USE_TRIGONOMETRY_DEGREE
        "Czy argumentami funkcji trygonometrycznych maja byc stopnie" ON)
if (USE_TRIGONOMETRY_DEGREE)
  include_directories ("${PROJECT_SOURCE_DIR}/trygonometria")
  add_subdirectory(trygonometria)
  target_link_libraries (Laborka trygonometria)
endif (USE_TRIGONOMETRY_DEGREE)
configure_file (
  "${PROJECT_SOURCE_DIR}/LaborkaConfig.h.in"
  "${PROJECT_BINARY_DIR}/LaborkaConfig.h"
  )
include_directories("${PROJECT_BINARY_DIR}")
cmake_minimum_required (VERSION 2.8)