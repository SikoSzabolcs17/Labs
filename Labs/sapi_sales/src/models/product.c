//
// Created by Siko Szabolcs on 2022. 03. 02..
//

#include "../../headers/models/product.h"


char *getProductType(ProductType type) {
    switch (type) {
        case GROCERY:
            return "Grocery";
        case FRUIT:
            return "Fruit";
        case SCHOOL:
            return "School";
        case OBJECT:
            return "Object";
        default:
            return "Undefined";
    }


    return NULL;
}
void createProduct(Product** product){
    *product = (Product*) malloc(sizeof(Product));
}
void setProduct(Product* product,char* id,char* name,ProductType type,unsigned int amount){
    strcpy(product->id,id);
    strcpy(product->name,name);
    product->type = type;
    product->amount = amount;
    product->creationDate = time(NULL);
}
void copyProduct(Product* destination,Product* from){
    strcpy(destination->id,from->id);
    strcpy(destination->name,from->name);
    destination->type = from->type;
    destination->creationDate = from->creationDate;
    destination->amount = from->amount;
}
void setPrice(Product* product,double price){
    product->price = price;
}

void printProduct(Product* product){
    printf("%s details:\n"
           "\t - ID: %s\n"
           "\t - TYPE: %d\n"
           "\t - AMOUNT: %u\n"
           "\t - CREATION DATE: %ld\n",
           product->name,
           product->id,
           getProductType(product->type),
           product->amount,
           product->creationDate
           );
}
void deleteProduct(Product** pProduct){
    free(*pProduct);
}