//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#include "../headers/errors.h"

void printErrorMessage(enum ErrorType errorType) {
    switch (errorType) {
        case MEMORY_ALLOCATION:
            printf("Memory Allocation error!\n\n");
            break;
        case FILE_NOT_FOUND:
            printf("FILE NOT FOUND\n\n");
            break;
        case NULL_POINTER_EXCEPTION:
            break;

        default:
            break;
    }
}

