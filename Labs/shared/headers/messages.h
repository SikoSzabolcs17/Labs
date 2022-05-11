//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#ifndef LABS_MESSAGES_H
#define LABS_MESSAGES_H

#include <stdio.h>

enum LabType{
    LAB2,
    LAB3,
    LAB4,
    LAB5,
    LAB8,
    LAB9,
    LAB10,
    LAB12,
};
enum DeleteType{
    USER,
    PRODUCT,
    USER_ARRAY,
    PRODUCT_ARRAY
};

void printDescriptionMessage(enum LabType messageType);
void printDeleteMessage(enum DeleteType deleteType);

#endif //LABS_MESSAGES_H
