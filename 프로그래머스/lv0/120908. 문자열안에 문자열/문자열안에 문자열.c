#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 2;
    for(int i = 0; *(str1+i); i++){        
        if(*(str2) == *(str1+i)){
            for(int j = 0; *(str2+j)==*(str1+i+j); j++){
                j==strlen(str2)-1?answer=1:0;
            }
        }
    }
    
    return answer;
}