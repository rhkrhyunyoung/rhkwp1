cmake_minimum_required(VERSION 3.10)
project(StringHelperProject)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_executable(main main.cc StringHelper.cc)
add_executable(StringHelper_test StringHelper_test.cc StringHelper.cc)

target_link_libraries(StringHelper_test gtest gtest_main pthread)

add_test(NAME StringHelperTest COMMAND StringHelper_test)

