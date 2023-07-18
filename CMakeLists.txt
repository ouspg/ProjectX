cmake_minimum_required(VERSION 3.16)
project(cmake_example) #update project name

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(src)

add_executable(${PROJECT_NAME} main.cpp ) #this executes main.cpp file present in the root project directory
target_link_libraries(${PROJECT_NAME} PRIVATE <path_to_src_file>) #update to link with the file in ProjectX/src file 

## This file is used to create the fuzzer configuration (.yaml) file
## Initialize your fuzz project with command: cifuzz init

## Add following two lines to it to enable fuzz testing 
# find_package(cifuzz NO_SYSTEM_ENVIRONMENT_PATH)
# enable_fuzz_testing()

## Update this file to correctly point to your created fuzz test file. If you have multiple fuzz test files you'll have to write
## multiple lines. For example, for two designed test files 1 and 2, following two lines should be added 
# add_fuzz_test(test1 test/test1.cpp)
# add_fuzz_test(test2 test/test2.cpp)

## Next, correctly point to linked source file present in ProjectX/src folder
# target_link_libraries(<fuzz_test_name> PRIVATE <name_of_source_code>)
## Note: <name_of_source_code> is the name you'll assign to your source_code in the second CMakelists.txt file present in /src folder 