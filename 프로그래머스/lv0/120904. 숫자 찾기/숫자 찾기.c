#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int num, int k) {
    int count=0, answer = -1;
    for(int i = 1; num/i; i *= 10){
        (num/i)%10==k?answer=log10(i):0;
        count++;
    }
    answer= count - answer;
    answer>count?(answer= -1):0;
    return answer;
}