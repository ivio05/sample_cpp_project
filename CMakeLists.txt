cmake_minimum_required(VERSION 3.14)
project(sample_cpp_project)

include_directories(include)
add_executable(main main.cpp src/my_mul.cpp)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark
    GIT_TAG v1.9.0
)

FetchContent_MakeAvailable(googletest benchmark)

enable_testing()
add_executable(tests test_mul.cpp src/my_mul.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)


add_executable(benches bench_mul.cpp src/my_mul.cpp)
target_link_libraries(benches benchmark::benchmark)