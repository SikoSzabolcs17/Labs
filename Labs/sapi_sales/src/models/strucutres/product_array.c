//
// Created by Siko Szabolcs on 2022. 03. 09..
//

#include "../../../headers/models/structures/product_array.h"

void createProductArray(ProductArray** productArray,unsigned int maxProducts){
    *productArray = (ProductArray*) malloc(maxProducts*sizeof(ProductArray));
}
void deleteProductArray(ProductArray** productArray){
    free(*productArray);
}
bool addNewProduct(ProductArray* productArray,Product* newProduct){
    if(productArray->capacity > productArray->numberOfProducts){

        productArray->products[productArray->numberOfProducts]=newProduct;
        productArray->numberOfProducts++;

        return true;
    }
    return false;
}