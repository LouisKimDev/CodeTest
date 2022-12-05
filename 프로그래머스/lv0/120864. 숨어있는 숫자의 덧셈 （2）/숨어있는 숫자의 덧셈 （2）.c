#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_str) {
    int ans = 0, n = 0;
    int t, i;
    for(i = 0; my_str[i]; i++){
        t = my_str[i];
        if(t>='0'&& t<='9') n = n * 10 + t - '0';
        else {ans += n; n = 0;}
    }
    ans += n;
    return ans;

}