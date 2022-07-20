cmake_minimum_required(VERSION 3.22)
project(ultracalccpp)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCE_FILES
        "src/*.cpp"
        "src/*.tpp"
        "src/arithmetic/*.cpp"
        "src/parsers/*.cpp"
        "src/parsers/*.tpp"
        "src/tokens/*.cpp"
        "src/tokens/*.tpp")

add_executable(${PROJECT_NAME} main.cpp ${SOURCE_FILES})
target_include_directories(${PROJECT_NAME} PRIVATE "include" "include/parsers" "include/tokens")