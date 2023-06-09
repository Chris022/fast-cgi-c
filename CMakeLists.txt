# ----------------------------------------------------------------------------
#  Root CMake file for FastCGI C
#
#    From the build directory, invoke:
#      $ cmake <PATH_TO_PROJECT_ROOT>
#
# ----------------------------------------------------------------------------

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "
FATAL: In-source builds are not allowed.
       You should create a separate directory for build files.
")
endif()

cmake_minimum_required(VERSION 3.18)

project(FastCGI-C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Important compile as static assembly since otherwhise lighttpd can't run the c programm (it uses alpine, while we are using debian)
link_libraries("-static")

add_executable(cgi-example cgi-example.c)

target_link_libraries(cgi-example PUBLIC "-static") # static
