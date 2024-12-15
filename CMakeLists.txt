cmake_minimum_required(VERSION 3.30)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c cjson/cJSON.c
        json.c
        json.h
        errors.c
        errors.h
        file.c
        file.h)