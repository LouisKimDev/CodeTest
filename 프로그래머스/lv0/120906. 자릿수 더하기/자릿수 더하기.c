#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i = 1; n/i; i *= 10){
        answer += (n/i)%10;
    }
    return answer;
}