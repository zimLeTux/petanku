cmake_minimum_required(VERSION 2.6)
project(petanku)

add_executable(petanku main.cpp)

install(TARGETS petanku RUNTIME DESTINATION bin)
