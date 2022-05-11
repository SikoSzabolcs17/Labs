//
// Created by Siko Szabolcs on 2022. 05. 11..
//

#include "../../../headers/models/structures/product_hash_table.h"

void createHash(Hash** pHash,int capacity){
    (*pHash) =(Hash*) malloc(sizeof(Hash));
    (*pHash)->elements = 0;
    (*pHash)->capacity = capacity;
    (*pHash)->table = (Product**) malloc(capacity* sizeof(Product*));
    for (int i = 0; i < capacity; ++i) {
        createProduct(&(*pHash)->table[i]);
        strcpy((*pHash)->table[i]->id," ");
    }
}
void insertHash(Hash* hash, Product* product){
    int i = 0;
    int id = 0;
    for (int j = 0; product->id[j] != '\0'; ++j) {
        if(product->id[j] >= '0' && product->id[i]<='9'){
            id = id*10 + (product->id[j]-48);
        }
    }

    do{
        int j = (id + i) % hash->capacity;
        if(strcmp(hash->table[j]->id," ")==0){
            copyProduct(hash->table[j],product);
            hash->elements++;
            return;
        }
        else{
            i++;
        }

    } while (i!=hash->capacity);
    printf("Tulcsordulas!\n");
}
void printHashTable(Hash* hash){
    for (int i = 0; i < hash->capacity; ++i) {
        if(hash->table[i] !=NULL){
            if(strcmp(hash->table[i]->id," ") !=0){
                printProduct(hash->table[i]);
            }
        }

    }
    printf("\n");
}
int searchHashTable(Hash* hash, int id){
    int i =0;
    char idStr[10];
    itoa(id,idStr,10);

    do{
        int j = (id + i)%hash->capacity;

        if(strcmp(hash->table[j]->id,idStr)==0){
            return j;
        }
        else{
            i++;
        }
    } while (i!=hash->capacity);
    return -1;
}
void deleteFromHashTable(Hash* hash, int id){
    if(hash == NULL){
        return;
    }
    int realId = searchHashTable(hash,id);
    //deleteProduct(&hash->table[realId]);
    strcpy(hash->table[realId]->id," ");
    hash->elements--;
}
void freeHashTable(Hash** pHash){
    if(pHash == NULL){
        return;
    }
    for (int i = 0; i < (*pHash)->capacity; ++i) {
        deleteProduct(&(*pHash)->table[i]);
    }
    free(*pHash);
}