cmake_minimum_required(VERSION 3.16)

project(vetor2d LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vetor2d main.cpp
    vetor2d.h vetor2d.cpp)

include(GNUInstallDirs)
install(TARGETS vetor2d
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
