//
// Created by Siko Szabolcs on 2022. 03. 09..
//

#include "../../../headers/models/structures/product_array.h"

void createProductArray(ProductArray** productArray,unsigned int maxProducts){
    *productArray = (ProductArray*) malloc(sizeof(ProductArray));

    (*productArray)->products = (Product**) malloc(maxProducts*sizeof(Product*));

    (*productArray)->capacity = maxProducts;
    (*productArray)->numberOfProducts = 0;

    for (int i = 0; i < maxProducts; ++i) {
        createProduct(&((*productArray)->products[i]));
    }
}
void deleteProductArray(ProductArray** productArray){

    if(productArray !=NULL){

        for (int i = 0; i < (*productArray)->numberOfProducts; ++i) {


            if(&(*productArray)->products[i]!=NULL){
                deleteProduct(&(*productArray)->products[i]);
            }

        }
        free((*productArray)->products);

        free(*productArray);
    }
    else{
        printErrorMessage(MEMORY_ALLOCATION);
    }


}
bool addNewProduct(ProductArray* productArray,Product* newProduct){

    if(productArray->capacity > productArray->numberOfProducts){

        copyProduct(productArray->products[productArray->numberOfProducts],newProduct);
        productArray->numberOfProducts++;

        return true;
    }
    return false;
}