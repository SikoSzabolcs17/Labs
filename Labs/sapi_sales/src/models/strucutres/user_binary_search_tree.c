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


    while (temp != NULL){

        if(temp->info->id < user->id){
            if(temp->left !=NULL){
                temp = temp->left;
            }
            else{
                create(&temp->left);
                copyUser(temp->left->info,user);
                return;
            }
        }
        else{
            if(temp->right != NULL){
                temp = temp->right;
            }
            else{
                create(&temp->right);
                copyUser(temp->right->info,user);
                return;
            }
        }
    }
}
bool search(UserTreeNode* userTreeNode, int info){

    if(userTreeNode == NULL){
        return false;
    }
    if(info < userTreeNode->info->id){
        search(userTreeNode->left,info);
    }
    else if(info < userTreeNode->info->id){
        search(userTreeNode->right,info);
    } else{
        return true;
    }

}
void preorderPrint(UserTreeNode* userTreeNode, char* mode){
    if(userTreeNode != NULL){
        printUser(userTreeNode->info,mode);
        preorderPrint(userTreeNode->left,mode);
        preorderPrint(userTreeNode->right,mode);
    }
}

void delete(UserTreeNode** pUserTreeNode, int info){
    UserTreeNode* treeNode = *pUserTreeNode;

    while (treeNode != NULL){

        if(treeNode->left != NULL && treeNode->left->info->id == info){
            deleteUser(&treeNode->left->info);
            treeNode->left = NULL;
            return;
        }
        else if(treeNode->right != NULL && treeNode->right->info->id == info){
            deleteUser(&treeNode->right->info);
            treeNode->right = NULL;
            return;
        }
        if(treeNode->info->id < info){
            treeNode = treeNode->right;
        }
        else{
            treeNode = treeNode->left;
        }
    }
}