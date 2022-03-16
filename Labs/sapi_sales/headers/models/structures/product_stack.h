//
// Created by Siko Szabolcs on 2022. 03. 16..
//

#ifndef LABS_PRODUCT_STACK_H
#define LABS_PRODUCT_STACK_H

#include "../product.h"
#include "stdbool.h"

typedef struct{

    unsigned int capacity;
    int top;
    Product** products;

}ProductStack;

void createProductStack(ProductStack** productStack,unsigned int capacity);
void push(ProductStack* productStack,Product* product);
Product* top(ProductStack* productStack);
bool stackIsEmpty(ProductStack* productStack);
bool stackIsFull(ProductStack* productStack);
void deleteProductStack(ProductStack** pProductStack);

#endif //LABS_PRODUCT_STACK_H
