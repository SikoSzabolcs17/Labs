//
// Created by Siko Szabolcs on 2022. 05. 11..
//

#ifndef LABS_PRODUCT_HASH_TABLE_H
#define LABS_PRODUCT_HASH_TABLE_H

#include "../product.h"

typedef struct{
    Product** table;
    int capacity,elements;

}Hash;

void createHash(Hash** pHash,int capacity);
void insertHash(Hash* hash, Product* product);
void printHashTable(Hash* hash);
int searchHashTable(Hash* hash, int id);
void deleteFromHashTable(Hash* hash, int id);
void freeHashTable(Hash** pHash);

#endif //LABS_PRODUCT_HASH_TABLE_H
