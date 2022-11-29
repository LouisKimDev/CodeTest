#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    int cnt = -2;
    for(int i = 0; i < k; i++){
        cnt = cnt + 2;
        if(cnt >= numbers_len)
            cnt = cnt-numbers_len;
    }
    printf("%d",cnt);
    answer = numbers[cnt];
    return answer;
}