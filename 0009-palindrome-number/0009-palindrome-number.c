#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool isPalindrome(int x){
    //x가 음수이거나 0이 아닌 한자리수 일때는 무조건 false
    if(x<0||(x%10 == 0 && x != 0)){
        return false;
    }
    int RevNum = 0;
    while(x>RevNum){
        RevNum = RevNum * 10 + x % 10;
        x/=10;
    }
    //x가 홀수 자리 숫자이면 /10을 통해 RevNum과 자리 맞춰줌
    return x == RevNum || x==RevNum/10;
}