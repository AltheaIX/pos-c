# CMake generated Testfile for 
# Source directory: C:/Users/Malik/CLionProjects/untitled/cjson
# Build directory: C:/Users/Malik/CLionProjects/untitled/cmake-build-debug/cjson
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cJSON_test "C:/Users/Malik/CLionProjects/untitled/cmake-build-debug/cjson/cJSON_test")
set_tests_properties(cJSON_test PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Malik/CLionProjects/untitled/cjson/CMakeLists.txt;248;add_test;C:/Users/Malik/CLionProjects/untitled/cjson/CMakeLists.txt;0;")
subdirs("tests")
subdirs("fuzzing")
