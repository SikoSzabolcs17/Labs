//
// Created by Siko Szabolcs on 2022. 03. 09..
//
#include "../../headers/models/structures/user_array.h"
#include "../../headers//manager/lab2.h"
#include "../../headers/models/structures/product_array.h"

void testUserArrayFunctionalities(){

    UserArray* userArray = NULL;
    createUserArray(&userArray,3);

    User* user1;
    createUser(&user1);

    setUser(user1,"John",STUDENT,MALE,INFORMATICS,DateC(2002,3,15));


    User* user2;
    createUser(&user2);

    setUser(user2,"Mary",STUDENT,FEMALE,INFORMATICS,DateC(2000,3,15));



    addNewUser(userArray,user1);
    addNewUser(userArray,user2);

    printUser(getUserAtPosition(userArray,0),CON);
    printUser(getUserAtPosition(userArray,1),CON);

    deleteUser(&user1);
    deleteUser(&user2);
    deleteUserArray(&userArray);

}
void testProductArrayFunctionalities(){

    ProductArray* productArray;

    createProductArray(&productArray,5);

    Product *product1,*product2;

    createProduct(&product1);

    setProduct(product1,"10","Apple",GROCERY,3);

    createProduct(&product2);

    setProduct(product2,"23","History book",SCHOOL,5);

    setPrice(product1,7);
    setPrice(product2,50);


    addNewProduct(productArray,product1);
    addNewProduct(productArray,product2);

    printProduct(productArray->products[0]);
    printProduct(productArray->products[1]);


    deleteProduct(&product1);
    deleteProduct(&product2);

    deleteProductArray(&productArray);


}

