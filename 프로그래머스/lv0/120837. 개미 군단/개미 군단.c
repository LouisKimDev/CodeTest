#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    while(hp-5 >= 0){
        answer++;
        hp = hp - 5;
    }
    while(hp - 3 >= 0){
        answer++;
        hp = hp - 3;
    }
    while(hp - 1 >= 0){
        answer++;
        hp = hp - 1;
    }
    return answer;
}