//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#include "../headers/messages.h"

void printDescreptionMessage(enum LabType messageType) {
    switch (messageType) {
        case LAB2:
            printf("\n\n*******************************************************\n\n");
            printf("Testing basic User and Product functionalities");
            printf("\n\n*******************************************************\n\n");
            break;

        case LAB3:

            printf("\n\n*******************************************************\n\n");
            printf("Testing User with modified BirthDate and UserArray functionalities");
            printf("\n\n*******************************************************\n\n");
            break;

        case LAB4:
            break;
        default:
            printf("Undefined description\n");
            break;
    }
}

