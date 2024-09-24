cmake_minimum_required(VERSION 3.11)
project(sample_cpp_project)

add_executable(main main.cpp my_add.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

FetchContent_Declare(
    google_benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.8.0
)
FetchContent_MakeAvailable(google_benchmark)

enable_testing()
add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)

add_executable(benchmark_add benchmark_add.cpp my_add.cpp)
target_link_libraries(benchmark_add benchmark)