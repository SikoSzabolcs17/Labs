//
// Created by Siko Szabolcs on 2022. 03. 09..
//

#include "../../../headers/models/structures/product_array.h"

void createProductArray(ProductArray** productArray,unsigned int maxProducts){
    *productArray = (ProductArray*) malloc(maxProducts*sizeof(ProductArray));

    (*productArray)->products = (Product**) malloc(maxProducts*sizeof(Product*));

    for (int i = 0; i < maxProducts; ++i) {
        createProduct(&(*productArray)->products[i]);
    }
}
void deleteProductArray(ProductArray** productArray){
    free(*productArray);
}
bool addNewProduct(ProductArray* productArray,Product* newProduct){
    if(productArray->capacity > productArray->numberOfProducts){

        copyProduct(productArray->products[productArray->numberOfProducts],newProduct);
        productArray->numberOfProducts++;

        return true;
    }
    return false;
}