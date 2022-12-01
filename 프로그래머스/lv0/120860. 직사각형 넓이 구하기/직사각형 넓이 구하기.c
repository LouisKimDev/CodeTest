#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** d, size_t r, size_t c) {
    int i,a,k,disx,disy;
    disx=0;
    disy=0;
    for(i = a = 0; i < 3; i++){
        for(k = 0; k < 3; k++){
            i&&(abs(d[i][0]-d[k][0])>disx)?(disx=abs(d[i][0]-d[i+1][0])):0;
            i&&(abs(d[i][1]-d[k][1])>disy)?(disy=abs(d[i][1]-d[i+1][1])):0;
        }
    }
    a = disx * disy;
    return a;
}