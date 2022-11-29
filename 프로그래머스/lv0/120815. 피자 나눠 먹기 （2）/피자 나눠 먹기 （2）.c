#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    while((answer*6) % n  != 0){
        answer++;
    }
    return answer;
}