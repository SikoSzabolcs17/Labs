cmake_minimum_required(VERSION 3.20)
project(Labs C)

set(CMAKE_C_STANDARD 11)

add_executable(Labs main.c shared/headers/errors.h shared/src/errors.c shared/headers/messages.h shared/src/messages.c shared/headers/useful.h sapi_sales/headers/models/user.h sapi_sales/headers/manager/lab2.h sapi_sales/headers/manager/lab_manager.h sapi_sales/src/models/user.c sapi_sales/headers/models/product.h sapi_sales/src/models/product.c sapi_sales/src/manager/lab2.c sapi_sales/src/manager/lab_manager.c)
