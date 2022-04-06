//
// Created by Siko Szabolcs on 2022. 04. 06..
//
#include "../../headers/manager/lab8.h"

void testUserQueueFunctionalities(){
    User* user1,*user2;

    createUser(&user1);
    createUser(&user2);

    setUser(user1,"Janos",COMPUTER_SCIENCE,MALE,STUDENT, DateC(2002,3,17));
    setUser(user2,"Istvan",INFORMATICS,MALE,TEACHER, DateC(1990,2,17));


    UserQueue* userQueue;
    createUserQueue(&userQueue,10);

    //printQueue(userQueue,"CON");

    enqueue(userQueue,user1);
    enqueue(userQueue,user2);

    printf("%d. a sorban az 1 es id val rendelkezo elem van\n", findElementInQueue(userQueue,1));

    char mode[4];
    strcpy(mode,"CON");

    printQueue(userQueue,mode);

    dequeue(userQueue);

    printQueue(userQueue,mode);

    return;

    //deleteQueue(&userQueue);



}
