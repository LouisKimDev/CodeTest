#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int n, int numlist[], size_t numlist_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numlist_len);
    int cnt=0;
    for(int i = 0; numlist[i]; i++){
        numlist[i]%n!=0?0:(answer[cnt++]=numlist[i]);
    }
    return answer;
}