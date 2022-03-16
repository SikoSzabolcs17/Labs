//
// Created by Siko Szabolcs on 2022. 03. 09..
//
#include "../../../headers/models/structures/user_array.h"

void createUserArray(UserArray** userArray,unsigned int maxUsers){
    *userArray = (UserArray*) malloc(sizeof(UserArray));
    (*userArray)->users =(User**)malloc(maxUsers*sizeof(User*));
    (*userArray)->capacity = maxUsers;
    (*userArray)->numberOfUsers = 0;

    for (int i = 0; i < maxUsers; ++i) {
        createUser(&(*userArray)->users[i]);
    }

}
void deleteUserArray(UserArray** userArray){

    for (int i = 0; i < (*userArray)->numberOfUsers; ++i) {
        deleteUser(&(*userArray)->users[i]);
    }
    free((*userArray)->users);
    free(*userArray);
}
bool addNewUser(UserArray* userArray, User* newUser){
    if(userArray->capacity > userArray->numberOfUsers){

        userArray->users[userArray->numberOfUsers]->id = newUser->id;
        userArray->users[userArray->numberOfUsers]->type = newUser->type;
        userArray->users[userArray->numberOfUsers]->birthdate = newUser->birthdate;
        userArray->users[userArray->numberOfUsers]->gender = newUser->gender;
        userArray->users[userArray->numberOfUsers]->specialization = newUser->specialization;
        strcpy(userArray->users[userArray->numberOfUsers]->name,newUser->name);


        userArray->numberOfUsers++;

        return true;
    }
    return false;
}
User* getUserAtPosition(UserArray* userArray,int position){
    return userArray->users[position];
}

