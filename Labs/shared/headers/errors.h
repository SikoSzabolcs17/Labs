//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#ifndef LABS_ERRORS_H
#define LABS_ERRORS_H

#include <stdio.h>
#include <stdlib.h>

enum ErrorType{
    MEMORY_ALLOCATION,
    FILE_NOT_FOUND,
    NULL_POINTER_EXCEPTION
};

void printErrorMessage(enum ErrorType errorType);

#endif //LABS_ERRORS_H
