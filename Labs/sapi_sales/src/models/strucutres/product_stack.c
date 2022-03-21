//
// Created by Siko Szabolcs on 2022. 03. 16..
//
#include "../../../headers/models/structures/product_stack.h"

void createProductStack(ProductStack** productStack,unsigned int capacity){
    *productStack = (ProductStack*) malloc(sizeof(ProductStack));
    (*productStack)->capacity = capacity;

    (*productStack)->products = (Product**) malloc(capacity*sizeof(Product*));

    for (int i = 0; i < capacity; ++i) {
        createProduct(&((*productStack)->products[i]));
    }
}
void push(ProductStack* productStack,Product* product){
    copyProduct(productStack->products[productStack->capacity],product);
    productStack->capacity++;
}
void pop(ProductStack* productStack){

    free(productStack->products[productStack->top]);
    productStack->top--;
}
Product* top(ProductStack* productStack){
    return productStack->products[productStack->top];
}
bool stackIsEmpty(ProductStack* productStack){
    if(top(productStack)==NULL){
        return true;
    }
    else return false;
}
bool stackIsFull(ProductStack* productStack){
    if(productStack->capacity <= productStack->top){
        return true;
    } else return false;
}
void deleteProductStack(ProductStack** productStack){
    for (int i = 0; i < (*productStack)->top; ++i) {
        deleteProduct(&(*productStack)->products[i]);
    }
    free((*productStack)->products);
    free(*productStack);
}