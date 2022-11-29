#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    int n;
    for(int i = 10; i/order < 10;i *= 10){
        n = (order % i)/(i/10);
        !n?0:!(n%3)?answer++:0;
    }
    return answer;
}