//
// Created by Siko Szabolcs on 2022. 02. 16..
//

#include "masodikFeladat.h"

float sum(int size, float *array) {

    float result = 0;
    for (int i = 0; i < size; ++i) {
        result += array[i];
    }

    return result;
}

float multiply(int size, float *array) {

    float multi = 1;
    for (int i = 0; i < size; ++i) {
        multi *= array[i];
    }

    return multi;
}

float average(int size, float *array) {

    float sum1 = sum(size,array);

    return sum1 / size;
}
