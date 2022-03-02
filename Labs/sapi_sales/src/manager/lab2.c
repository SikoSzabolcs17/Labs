//
// Created by Siko Szabolcs on 2022. 03. 02..
//
#include "../../headers/manager/lab2.h"

void testUserFunctionalites(){
    User *user1,*user2,*user3;

    createUser(&user1);
    createUser(&user2);
    createUser(&user2);

    setUser(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2003,10,3));
    setUser(user2,"Jane Austin", TEACHER,FEMALE,ENGINEERING, DateC(1996,12,5));
    setUser(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2003,10,3));

}

void testProductFunctionalites(){

}
