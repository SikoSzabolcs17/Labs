//
// Created by Siko Szabolcs on 2022. 03. 09..
//
#include "../../src/manager/lab2.c"
#include "../../headers/models/structures/user_array.h"

void testUserArrayFunctionalities(){

    UserArray* userArray = NULL;
    createUserArray(&userArray,3);

    User* user1;
    createUser(&user1);

    setUser(user1,"John",STUDENT,MALE,INFORMATICS,DateC(2002,3,15));

    User* user2;
    createUser(&user2);

    setUser(user1,"Mary",STUDENT,FEMALE,INFORMATICS,DateC(2000,3,15));

    addNewUser(userArray,user1);
    addNewUser(userArray,user2);

    printUser(getUserAtPosition(userArray,0),CON);


}

