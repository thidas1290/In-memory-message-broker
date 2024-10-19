cmake_minimum_required(VERSION 3.2)
project(inmemory_broker_client)

set(CMAKE_CXX_STANDARD 17)

include_directories(/usr/local/include)
include_directories(/opt/homebrew/include)

link_directories(/usr/local/lib)
link_directories(/opt/homebrew/lib)

add_executable(main main.cpp)

target_link_libraries(main pthread dl ssl)