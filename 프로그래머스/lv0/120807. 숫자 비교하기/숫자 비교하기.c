#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int x = 0;
    int answer=0;
    x = num1-num2;
    if(x==0){
        answer=1;
    }
    else
        answer=-1;
    
    return answer;
}