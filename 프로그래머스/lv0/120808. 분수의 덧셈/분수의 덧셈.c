#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int denum1, int num1, int denum2, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*2);
    answer[0] = (num1*denum2)+(num2*denum1);
    answer[1] = num1*num2;
    
    int i = 2;
    if(answer[1]==answer[0])
        {answer[1]=1;
        answer[0]=1;}
    	
    while(!(i>=answer[1] && i>=answer[0])){
        if((answer[0]%i==0)&&(answer[1]%i==0)){
            answer[0] = answer[0] / i;
            answer[1] = answer[1] / i;
        i=2;
        }
        else
            i++;
    }
    
    return answer;
}