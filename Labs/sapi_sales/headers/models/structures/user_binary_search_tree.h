//
// Created by Siko Szabolcs on 2022. 04. 27..
//

#ifndef LABS_USER_BINARY_SEARCH_TREE_H
#define LABS_USER_BINARY_SEARCH_TREE_H

#include "../user.h"

typedef struct UserTreeNode{
    User* info;
    struct UserTreeNode *left, *right;

} UserTreeNode;

void create(UserTreeNode**);
void insert(UserTreeNode**, User*);
bool search(UserTreeNode*, int);
void inorderPrint(UserTreeNode*, char*);
void preorderPrint(UserTreeNode*, char*);
void delete(UserTreeNode**, int);

#endif //LABS_USER_BINARY_SEARCH_TREE_H
