//
// Created by Szabi-PC on 2022. 03. 21..
//
#include "../../headers/manager/lab5.h"


void testPorductStackFunctionalities(){
    ProductStack* productStack;

    createProductStack(&productStack,10);

    Product* product;
    createProduct(&product);
    setProduct(product,"231","Pear",GROCERY,11);

    push(productStack,product);


    int choice, i = 0;

    while (true){
        printf("\n\n1. Push Operation\n");
        printf("2. Pop Operation\n");
        printf("3. Top Operation\n");
        printf("4. isEmpty operation\n");
        printf("5. isFull operation\n");
        printf("6. Exit\n");
        printf("Enter your choice of operations:");

        scanf("%d",&choice);

        switch (choice) {
            case 1:
                Product* product;
                createProduct(&product);
                setProduct(product,"123","Apple",GROCERY,11);
                push(productStack,product);
                printProduct(top(productStack));

                break;
            case 2:
                pop(productStack);
                break;
            case 3:
                printProduct(top(productStack));
                break;
            case 4:
                if(stackIsEmpty(productStack)){
                    printf("Stack is empty\n");
                }
                else printf("Stack is not empty\n");
                break;
            case 5:
                if(stackIsFull(productStack)){
                    printf("Stack is full!\n");
                }
                else printf("Stack is not full!\n");
                break;
            case 6:
                return;

            default:
                printf("Incorrect choice\n");
        }
    }

}
