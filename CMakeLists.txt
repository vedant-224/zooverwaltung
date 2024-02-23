cmake_minimum_required(VERSION 3.5)

project(Zoo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Zoo main.cpp
    herde.h herde.cpp
    gehege.h gehege.cpp
    zooverwaltung.h zooverwaltung.cpp)

include(GNUInstallDirs)
install(TARGETS Zoo
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
