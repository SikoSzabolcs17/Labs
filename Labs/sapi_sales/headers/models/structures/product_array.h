//
// Created by Siko Szabolcs on 2022. 03. 09..
//

#ifndef LABS_PRODUCT_ARRAY_H
#define LABS_PRODUCT_ARRAY_H

#include "../product.h"
#include "stdbool.h"


typedef struct {
    Product** products;
    unsigned int capacity;
    unsigned int numberOfProducts;

}ProductArray;

void createProductArray(ProductArray** productArray,unsigned int maxProducts);
void deleteProductArray(ProductArray** productArray);
bool addNewProduct(ProductArray* productArray,Product* newProduct);

#endif //LABS_PRODUCT_ARRAY_H
