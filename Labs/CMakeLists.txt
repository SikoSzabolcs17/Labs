cmake_minimum_required(VERSION 3.20)
project(Labs C)

set(CMAKE_C_STANDARD 11)

add_executable(Labs main.c shared/headers/errors.h
        shared/src/errors.c
        shared/headers/messages.h
        shared/src/messages.c
        shared/headers/useful.h
        sapi_sales/headers/models/user.h
        sapi_sales/headers/manager/lab2.h
        sapi_sales/headers/manager/lab_manager.h
        sapi_sales/src/models/user.c
        sapi_sales/headers/models/product.h
        sapi_sales/src/models/product.c
        sapi_sales/src/manager/lab2.c
        sapi_sales/src/manager/lab_manager.c
        sapi_sales/headers/manager/lab3.h
        sapi_sales/src/manager/lab3.c
        sapi_sales/headers/models/structures/user_array.h
        sapi_sales/src/models/strucutres/user_array.c
        sapi_sales/headers/models/structures/product_array.h
        sapi_sales/src/models/strucutres/product_array.c
        sapi_sales/headers/models/structures/product_stack.h
        sapi_sales/src/models/strucutres/product_stack.c
        sapi_sales/headers/manager/lab5.h
        sapi_sales/src/manager/lab5.c
        sapi_sales/headers/models/structures/user_queue.h
        sapi_sales/src/models/strucutres/user_queue.c
        sapi_sales/src/manager/lab8.c sapi_sales/headers/manager/lab8.h
        sapi_sales/headers/models/structures/user_list.h
        sapi_sales/src/models/strucutres/user_list.c
        sapi_sales/headers/manager/lab9.h
        sapi_sales/src/manager/lab9.c
        sapi_sales/src/models/strucutres/user_binary_search_tree.c
        sapi_sales/headers/models/structures/user_binary_search_tree.h
        sapi_sales/src/manager/lab10.c sapi_sales/headers/manager/lab10.h sapi_sales/src/models/strucutres/product_hash_table.c sapi_sales/headers/models/structures/product_hash_table.h sapi_sales/src/manager/lab12.c sapi_sales/headers/manager/lab12.h)
