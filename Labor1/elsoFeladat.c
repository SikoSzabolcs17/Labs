//
// Created by Siko Szabolcs on 2022. 02. 16..
//

#include "elsoFeladat.h"

int legnagyobbHarombol(int a ,int b,int c){
    if(a>b){
        if(c>b){
            if(a>c){
                return a;
            }
            else return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else return c;
    }
}
int legkisebbHarombol(int a ,int b,int c){
    if(a<b){
        if(c<b){
            if(a<c){
                return a;
            }
            else return c;
        }
    }
    else{
        if(b<c){
            return b;
        }
        else return c;
    }
}
