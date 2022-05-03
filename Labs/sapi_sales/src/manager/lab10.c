//
// Created by Siko Szabolcs on 2022. 04. 27..
//

#include "../../headers/manager/lab10.h"

void testUserBSTFunctionalities(){
    UserTreeNode* userTreeNode = NULL;

    User* user1,*user2, *user3,*user4,*user5;

    createUser(&user1);
    createUser(&user2);
    createUser(&user3);
    createUser(&user4);
    createUser(&user5);

    setUser(user1,"Janos",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2002,3,17));
    setUser(user2,"Istvan",TEACHER,MALE,INFORMATICS, DateC(1990,2,17));
    setUser(user3,"Eva",STUDENT,FEMALE,MATHEMATICS_INFORMATICS, DateC(2001,5,15));
    setUser(user4,"Bela",TEACHER,MALE,MATHEMATICS_INFORMATICS, DateC(1986,5,15));
    setUser(user5,"Margit",TEACHER,FEMALE,MATHEMATICS_INFORMATICS, DateC(1951,5,15));

    insert(&userTreeNode,user1);
    insert(&userTreeNode,user2);
    insert(&userTreeNode,user3);
    insert(&userTreeNode,user4);
    insert(&userTreeNode,user5);

    printf("Preorder!\n");

    preOrderPrint(userTreeNode, "CON");

    printf("*************************\n");

    delete(&userTreeNode,1);

    printf("Preorder!\n");

    preOrderPrint(userTreeNode, "CON");

    printf("*************************\n");

}