//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#include "../headers/messages.h"

void printDescriptionMessage(enum LabType messageType) {
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

        case LAB8:
            printf("\n\n*******************************************************\n\n");
            printf("Testing UserQueue functionalities");
            printf("\n\n*******************************************************\n\n");
            break;

        case LAB9:
            printf("\n\n*******************************************************\n\n");
            printf("Testing UserList functionalities");
            printf("\n\n*******************************************************\n\n");
            break;

        default:
            printf("Undefined description\n");
            break;
    }
}
void printDeleteMessage(enum DeleteType deleteType){

    switch (deleteType) {
        case USER:
            printf("User deleted...");
            return;
        case PRODUCT:
            printf("Product deleted...");
            return;

        case USER_ARRAY:
            printf("UserArray deleted...");
            return;
        case PRODUCT_ARRAY:
            printf("ProductArray deleted...");
            return;
        default:
            printf("Folyamatban");
            return;
    }
}

