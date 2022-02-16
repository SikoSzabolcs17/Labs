//
// Created by Siko Szabolcs on 2022. 02. 16..
//

#include "negyedikFeladat.h"

void kiirForditva(int sizeofArray, int *Array) {

    for (int i = sizeofArray-1; i>=0; --i) {
        printf("%d ",Array[i]);
    }
}
