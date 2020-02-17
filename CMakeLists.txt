cmake_minimum_required(VERSION 3.0.0)

#Configuration

project(MonAppli)
set(EXECUTABLE_OUTPUT_PATH ../build)

file(

        GLOB_RECURSE

        source_files

        src/*

)

add_executable(

        appliFab

        ${source_files}

)