#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int count,distance,min_dis,point;
    for(count = 0; count < array_len; count++){
        distance = n>array[count] ? n-array[count] : array[count]-n; 
        //거리의 절댓값 - distance
                        printf("count = %d, distance = %d, min_dis = %d, point = %d\n",count, distance, min_dis, point);
        ! count || min_dis>distance ? (point=count,min_dis=distance) : 
        (min_dis==distance) ? (array[point]>array[count]) ? (point=count) : 0 : 0;
        
    }
    
    return array[point];
}