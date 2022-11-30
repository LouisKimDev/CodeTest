#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    for(int i = 0; i < array_len; i++){
        for(int j = 1; array[i]/j; j *= 10){
            !((array[i]/j%10)-7)?answer++:0;
        }
    }
    return answer;
}