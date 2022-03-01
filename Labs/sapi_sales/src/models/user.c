//
// Created by Szabi-PC on 2022. 03. 02..
//
#include "../../headers/models/user.h"

int numberOfUser = 0;

char *getUserType(UserType type) {
    switch (type) {
        case STUDENT:
            return "Studnet";
        case TEACHER:
            return "Teacher";

        default:
            return "undefined";
    }
}

char *getGender(Gender type){
    switch (type) {

        case MALE:
            return "Male";

        case FEMALE:
            return "Female";
            
        default:
            return "Undefined";
    }
}

char *getSpecialization(Specialization type) {
    switch (type) {
        case INFORMATICS:
            return "Informatics";
        case COMPUTER_SCIENCE:
            return "Computer science";
        case AUTOMATION:
            return "Automation";
        case TELECOMMUNICATION:
            return "Telecommunication";
        case MATHEMATICS_INFORMATICS:
            return "Mathematics and Informatics";
        case ENGINEERING:
            return "Engineering";
        default:
            return "Undefined";
    }
}

User *createUser(char *name, UserType type, Gender gender, Specialization specialization, unsigned int birthYear) {

    User* newUser = (User*) malloc(sizeof(User));

    newUser->id = ++numberOfUser;
    newUser->specialization = specialization;
    newUser->birthYear = birthYear;
    newUser->gender = gender;
    newUser->type = type;
    strcpy(newUser->name, name);

    return newUser;
}

void printUser(User *user) {
    printf("%s details:\n"
           "\t - ID: %i\n"
           "\t - TYPE: %s\n"
           "\t - SPECIALIZATION: %s\n"
           "\t - BIRTH YEAR: %i\n",
           user->name,
           user->id,
           getUserType(user->type),
           getGender(user->gender),
           getSpecialization(user->specialization),
           user->birthYear);

}

