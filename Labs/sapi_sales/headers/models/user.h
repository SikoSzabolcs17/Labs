//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#ifndef LABS_USER_H
#define LABS_USER_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../../../shared/headers/errors.h"
#include "../../../shared/headers/messages.h"
#include "stdbool.h"

typedef enum {
    STUDENT,
    TEACHER

}UserType;

typedef enum {
    FEMALE,
    MALE

}Gender;

typedef enum{
    INFORMATICS,
    COMPUTER_SCIENCE,
    AUTOMATION,
    TELECOMMUNICATION,

    MATHEMATICS_INFORMATICS,
    ENGINEERING

}Specialization;

typedef struct{
    int year,month,day;
}Date;

typedef struct{
    unsigned int id;
    char name[50];
    UserType type;
    Gender gender;
    Specialization specialization;
    Date birthdate;

}User;

char* getUserType( UserType type);
char* getGender( Gender type);
char* getSpecialization( Specialization type);
void createUser(User**);

Date DateC(int year,int month,int day);

void setUser(
        User* user,
        char* name,
        UserType type,
        Gender gender,
        Specialization specialization,
        Date birthdate);

void printUser(User* user,char * mode);

void deleteUser(User** pUser);

void copyUser(User * destination,User* from);

bool equals(User* user1,User* user2){

    if(strcmp(user1->name,user2->name)==0){
        if(user1->id == user2->id){
            if(user1->gender == user2->gender && user1->type == user2->type){
                if(user1->birthdate.year == user2->birthdate.year) {
                    if (user1->birthdate.month == user2->birthdate.month)
                        if (user1->birthdate.day == user2->birthdate.day) {
                            return true;
                    }
                }
            }
        }
    }
    return false;
}


#endif //LABS_USER_H
