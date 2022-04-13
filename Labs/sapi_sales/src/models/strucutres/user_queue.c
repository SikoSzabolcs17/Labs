//
// Created by Siko Szabolcs on 2022. 04. 06..
//
#include "../../../headers/models/structures/user_queue.h"


void createUserQueue(UserQueue **userQueue, unsigned int maxSize) {
    *userQueue = (UserQueue*)malloc(sizeof(userQueue));

    (*userQueue)->users = (User**) malloc(maxSize*sizeof(User*));

    (*userQueue)->size = maxSize;
    (*userQueue)->rear = 0;
    (*userQueue)->front = 0;

    for (int i = 0; i < maxSize; ++i) {
        createUser(&(*userQueue)->users[i]);
    }
}
bool queueIsEmpty(UserQueue *userQueue){
    if( userQueue->front == userQueue->rear == 0){
        return true;
    }
    return false;
}
bool queueIsFull(UserQueue *userQueue){
    if(userQueue->rear == userQueue->size){
        return true;
    }
    return false;
}
void enqueue(UserQueue* userQueue,User *user){

    if(!queueIsFull(userQueue)){
        copyUser(userQueue->users[userQueue->rear],user);
        userQueue->rear++;
    }
}
void dequeue(UserQueue* userQueue){

    userQueue->front++;
}
int findElementInQueue(UserQueue* userQueue, int userId){
    for (int i = userQueue->front; i <userQueue->rear ; ++i) {
        if(userQueue->users[i]->id == userId){
            return i;
        }
    }
    return -1;
}
void printQueue(UserQueue* userQueue, char* destination){


    for (int i = userQueue->front; i < userQueue->rear; ++i) {
        printUser(userQueue->users[i],destination);
    }

}
void deleteQueue(UserQueue** userQueue){
    for (int i = 0; i < (*userQueue)->size; ++i) {
        deleteUser(&((*userQueue)->users[i]));
    }
    free((*userQueue)->users);

    free(*userQueue);
}
int findUser(UserQueue* userQueue,User* user){
    for (int i = userQueue->front; i <userQueue->rear ; ++i) {
       if(equals(userQueue->users[i],user)){
           return user->id;
       }
    }
    return -1;
}