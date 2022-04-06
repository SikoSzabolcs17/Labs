//
// Created by Siko Szabolcs on 2022. 03. 02..
//
#include "../../headers/manager/lab2.h"


void testUserFunctionalites(){
   User *user1,*user2,*user3;

   createUser(&user1);
   createUser(&user2);
   createUser(&user3);

   setUser(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2003,10,3));
   setUser(user2,"Jane Austin", TEACHER,FEMALE,ENGINEERING, DateC(1996,12,5));
   setUser(user3,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE, DateC(2003,10,3));


   printUser(user1,CON);
   printUser(user2,CON);
   printUser(user3,"CON");

    deleteUser(&user1);
    deleteUser(&user2);
    deleteUser(&user3);

}
void testProductFunctionalites(){
    Product *product1,*product2;

    createProduct(&product1);

    setProduct(product1,"10","Apple",GROCERY,3);

    createProduct(&product2);

    setProduct(product2,"23","History book",SCHOOL,5);

    setPrice(product1,7);
    setPrice(product2,50);

    printProduct(product1);
    printProduct(product2);

    deleteProduct(&product1);
    deleteProduct(&product2);

}
