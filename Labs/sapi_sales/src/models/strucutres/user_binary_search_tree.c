//
// Created by Siko Szabolcs on 2022. 04. 27..
//

#include "../../../headers/models/structures/user_binary_search_tree.h"

void create(UserTreeNode** pUserTreeNode){
    *pUserTreeNode = (UserTreeNode*) malloc(sizeof(UserTreeNode));

    createUser(&((*pUserTreeNode)->info));

    (*pUserTreeNode)->left = NULL;
    (*pUserTreeNode)->right = NULL;
}
void insert(UserTreeNode** userTreeNode, User* user){

    UserTreeNode* temp = *userTreeNode;

    if(*userTreeNode == NULL){
        create(userTreeNode);
        copyUser((*userTreeNode)->info,user);
        return;
    }
    else if(user->id < temp->info->id){
        insert(&temp->left,user);
    }
    else{
        insert(&temp->right,user);
    }
}
bool search(UserTreeNode* userTreeNode, int info){

    if(userTreeNode == NULL){
        return false;
    }
    if(info < userTreeNode->info->id){
        search(userTreeNode->left,info);
    }
    else if(info > userTreeNode->info->id){
        search(userTreeNode->right,info);
    } else{
        return true;
    }
}


void preOrderPrint(UserTreeNode* userTreeNode, char* mode){
    if(userTreeNode != NULL){
        printUser(userTreeNode->info,mode);
        preOrderPrint(userTreeNode->left, mode);
        preOrderPrint(userTreeNode->right, mode);
    }
}
void inOrderPrint(UserTreeNode* userTreeNode, char* mode){
    if(userTreeNode != NULL){
        inOrderPrint(userTreeNode->left,mode);
        printUser(userTreeNode->info,mode);
        inOrderPrint(userTreeNode->right,mode);
    }
}
void postOrderPrint(UserTreeNode* userTreeNode,char* mode){
    if(userTreeNode != NULL){
        postOrderPrint(userTreeNode->left,mode);
        postOrderPrint(userTreeNode->right,mode);
        printUser(userTreeNode->info,mode);
    }
}

UserTreeNode* delete(UserTreeNode** pUserTreeNode, int info){
    UserTreeNode* treeNode = *pUserTreeNode;

    if(treeNode == NULL){
        return NULL;
    }
    if(info < treeNode->info->id){
        treeNode->left = delete(&treeNode->left,info);
    }
    else if(info > treeNode->info->id){
        treeNode->right = delete(&treeNode->right,info);
    }
    else{
        if(treeNode->left == NULL){
            UserTreeNode* temp = treeNode->right;
            deleteUser(&treeNode->info);
            return temp;
        }
        else if(treeNode->right == NULL){

            UserTreeNode* temp = treeNode->left;
            deleteUser(&treeNode->info);
            return temp;
        }
        UserTreeNode* temp = minimumNode(treeNode->right);

        copyUser(treeNode->info,temp->info);

        treeNode->right = delete(&treeNode->right,temp->info->id);
    }
}
UserTreeNode* minimumNode(UserTreeNode* treeNode){

    UserTreeNode* temp = treeNode;

    while (temp != NULL && temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
User* minimum(UserTreeNode* userTreeNode){
    UserTreeNode* temp = userTreeNode;

    if(temp == NULL){
        return NULL;
    }

    while (temp != NULL && temp->left != NULL){
        temp = temp->left;
    }
    return temp->info;
}
User* maximum(UserTreeNode* userTreeNode){
    UserTreeNode* temp = userTreeNode;

    if(temp == NULL){
        return NULL;
    }

    while (temp != NULL && temp->right != NULL){
        temp = temp->right;
    }
    return temp->info;
}