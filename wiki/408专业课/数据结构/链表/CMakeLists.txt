cmake_minimum_required(VERSION 3.20)

project(LinkedList LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(LinkedList
    main.cpp
    LinkedList.cpp
    LinkedList.h
    Node.h
    DNode.h
    DoubleLinkedList.h
    DoubleLinkedList.cpp
)

target_compile_features(LinkedList PRIVATE cxx_std_17)

target_include_directories(LinkedList PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

if(MSVC)
    target_compile_options(LinkedList PRIVATE /utf-8 /W4 /permissive-)
else()
    target_compile_options(LinkedList PRIVATE -Wall -Wextra -Wpedantic)
endif()

if(MINGW)
    target_link_options(LinkedList PRIVATE -static -static-libgcc -static-libstdc++)
endif()
