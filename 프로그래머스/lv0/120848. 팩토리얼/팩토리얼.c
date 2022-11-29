#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int fact(int x){
    int a = 1;
    for(int i = 1; i < x+1; i++){
        a = a * i;
    }
    return a;
}

int solution(int n) {
    int answer = 1;
    while(fact(answer)<=n){
        if(fact(answer+1)>n)
            return answer;
        else
            answer++;
    }
    return answer;
}