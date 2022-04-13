//
// Created by Siko Szabolcs on 2022. 04. 13..
//
#include "../../headers/manager/lab9.h"

void testUserListFunctionalities(){
    UserNode* userNode;
    User* user1,*user2, *user3;

    createUser(&user1);
    createUser(&user2);
    createUser(&user3);

    setUser(user1,"Janos",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2002,3,17));
    setUser(user2,"Istvan",TEACHER,MALE,INFORMATICS, DateC(1990,2,17));
    setUser(user3,"Eva",STUDENT,FEMALE,MATHEMATICS_INFORMATICS, DateC(2001,5,15));


    createUserNode(&userNode,user1);

    insertFirst(&userNode,user2);
    insertLast(userNode,user3);

    printUserList(userNode,"CON");
    printf("*************************************\n");

    printUser( removeLast(userNode),"CON");
    printf(" This User was deleted from List !! \n\n");
    printUserList(userNode,"CON");
    printf("*************************************\n");

    printUser( removeFirst(&userNode),"CON");
    printf(" This User was deleted from List!! \n\n");
    printUserList(userNode,"CON");
    printf("*************************************\n");

}
