//
// Created by Siko Szabolcs on 2022. 05. 11..
//

#include "../../headers/manager/lab12.h"

void testProductHashTableFunctionalities(){
    Product* product1,*product2,*product3;
    createProduct(&product1);
    createProduct(&product2);
    createProduct(&product3);

    setProduct(product1,"1","Laptop",SCHOOL,3);
    setProduct(product2,"3","Apple",FRUIT,5);
    setProduct(product3,"2","NoteBook",SCHOOL,1);

    Hash* hash;
    createHash(&hash,3);
    insertHash(hash,product1);
    insertHash(hash,product2);
    insertHash(hash,product3);

    printHashTable(hash);

    printf("******************************************\n");

    deleteFromHashTable(hash,3);

    printHashTable(hash);

    freeHashTable(&hash);

    printHashTable(hash);
}