#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer;
    int MAX = 0; //빈도수
    int FLAG = 0; //최빈값
    int temp[1001] = {0,};
    
    if(array_len == 1){
        answer = array[0];
        return answer;
    }
    
    for(int i = 0; i < array_len; i++){
        temp[array[i]]++;
    }

    for(int i = 0; i <1000; i++){
        if(MAX<temp[i]){
            MAX = temp[i]; 
            FLAG = i; 

        }

    }
    
    for(int i = 0; i < 1000; i++){
        if(MAX == temp[i] && FLAG != i){
       return -1;
       }
    }

    

    answer = FLAG;
    return answer;
}