cmake_minimum_required(VERSION 3.31)
project(BankProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(BankProject main.cpp
        account_functions.cpp
        accounts.h
        cmake-build-debug/customers.cpp
        cmake-build-debug/customers.h
)
