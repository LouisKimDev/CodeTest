#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int max = 0;
    int flag = 0;
    for(int i = 0; i < numbers_len; i++){
        if(numbers[i]>answer){
            answer = numbers[i];
            flag = i;
        }
    }
    for(int j = 0; j < numbers_len; j++){
        if(numbers[j]>max && numbers[j] <= answer && flag != j){
            max = numbers[j];
        }
    }
    answer = answer * max;
    return answer;
}