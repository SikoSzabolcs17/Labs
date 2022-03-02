//
// Created by Siko Szabolcs on 2022. 02. 23..
//

#ifndef LABS_USER_H
#define LABS_USER_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

void printUser(User* user);

void deleteUser(User**);


#endif //LABS_USER_H
