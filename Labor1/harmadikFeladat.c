//
// Created by Siko Szabolcs on 2022. 02. 16..
//

#include "harmadikFeladat.h"

Result statisztika(int sizeofArray,int* Array){

    Result result;

    result.paros=0;
    result.paratlan=0;
    result.negativ=0;
    result.pozitiv=0;

    for (int i = 0; i < sizeofArray; ++i) {
        if(Array[i]%2)result.paratlan++;
        else result.paros++;

        if(Array[i]>0)result.pozitiv++;
        else result.negativ++;
    }
    return result;

}