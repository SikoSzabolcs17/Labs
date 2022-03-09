//
// Created by Siko Szabolcs on 2022. 03. 09..
//

#ifndef LABS_USER_ARRAY_H
#define LABS_USER_ARRAY_H

#include "../user.h"
#include <stdbool.h>

typedef struct {

    User** users;
    unsigned int capacity;
    unsigned int numberOfUsers;

}UserArray ;

void createUserArray(UserArray** userArray,unsigned int maxUsers);
void deleteUserArray(UserArray** userArray);
bool addNewUser(UserArray* userArray, User* newUser);
User* getUserAtPosition(UserArray* userArray,int position);

#endif //LABS_USER_ARRAY_H
