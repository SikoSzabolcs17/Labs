//
// Created by Siko Szabolcs on 2022. 03. 02..
//

#ifndef LABS_PRODUCT_H
#define LABS_PRODUCT_H

#include <sys/utime.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef enum {
    GROCERY,
    FRUIT,
    SCHOOL,
    OBJECT
}ProductType;

typedef struct {
    char id[10];
    char name[20];
    ProductType type;
    unsigned int amount;
    time_t creationDate;
    double price;

}Product;


char* getProductType(ProductType type);

void createProduct(Product** product);

void setProduct(Product* product,char* id,char* name,ProductType type,unsigned int amount);

void setPrice(Product* product,double price);

void printProduct(Product* product);

void deleteProduct(Product**);

void copyProduct(Product* destination,Product* from);

#endif //LABS_PRODUCT_H
