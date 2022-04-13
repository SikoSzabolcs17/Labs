//
// Created by Siko Szabolcs on 2022. 04. 13..
//
#include "../../../headers/models/structures/user_list.h"

void createUserNode(UserNode** userNode, User* userValue){
    *userNode = (UserNode *) malloc(sizeof(User));

    createUser(&(*userNode)->userValue);
    copyUser((*userNode)->userValue,userValue);

    (*userNode)->next = NULL;
}
void printUserList(UserNode* userNode, char* destination){

    UserNode* temp = userNode;
    while (temp!=NULL){
        printUser(temp->userValue,destination);
        temp = temp->next;
    }
}
User* findElementInList(UserNode* userNode, int userId){
    UserNode* temp = userNode;

    while (temp!=NULL){
        if(userNode->userValue->id == userId){
            return userNode->userValue;
        }
        temp = temp->next;
    }
    return NULL;
}
void insertFirst(UserNode** userNode, User* userValue){
    UserNode* newNode;
    createUserNode(&newNode,userValue);
    UserNode* temp = *userNode;
    *userNode = newNode;
    (*userNode)->next = temp;
}
void insertLast(UserNode *userNode, User* userValue){
    UserNode* newNode;
    createUserNode(&newNode,userValue);

    UserNode* temp = userNode;

    while (temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}

User* removeFirst(UserNode** userNode){
    UserNode* newFirst;
    newFirst = (*userNode)->next;
    User* user = (*userNode)->userValue;
    deleteUserList(userNode);
    *(userNode) = newFirst;
    return user;
}
User* removeLast(UserNode* userNode){
    UserNode* temp = userNode;

    while (temp->next->next != NULL){
        temp = temp->next;
    }
    UserNode* node = temp;

    temp = temp->next;
    node->next = NULL;

    User* user = temp->userValue;

    deleteUserList(&temp);

    return user;
}

void deleteUserList(UserNode** userNode){
    //deleteUser(&(*userNode)->userValue);
    (*userNode)->next = NULL;
    free(*userNode);
}