#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(char* str, int num1, int num2) {
    char x;
    x = str[num2];
    str[num2]&=str[num1];str[num2]|=str[num1];
    str[num1]&=x;str[num1]|=x;
    return str;
}