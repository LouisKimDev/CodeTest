#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int n[], size_t numbers_len) {
    int i,j,a = -10000000000;
    for(i = 0; i < numbers_len; i++){
        for(j = 0; j < numbers_len; j++){
            i!=j&&n[i]*n[j]>a?(a=n[i]*n[j]):0;
        }
    }
    return a;
}