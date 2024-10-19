cmake_minimum_required(VERSION 3.2)
project(inmemory_broker_server)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)

include_directories(/usr/local/include)
include_directories(/opt/homebrew/include)

link_directories(/usr/local/lib)
link_directories(/opt/homebrew/lib)

find_package(OpenSSL REQUIRED)

find_library(SSL_LIB libssl.a REQUIRED)
find_library(USB_LIB NAMES usb-1.0 libusb-1.0 REQUIRED)

message(${SSL_LIB})
message(${USB_LIB})

target_link_libraries(main
    pthread
    ${USB_LIB}
    )