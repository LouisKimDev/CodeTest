#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0; 
    if(price < 99999){
        answer = price;
    }
    else if(price <299999 && price>=100000){
        answer = price * 0.95;
    }
    else if(price < 499999 && price>=300000 ){
        answer = price * 0.9;
    }
    else{
        answer = price * 0.8;
    }
    return answer;
}