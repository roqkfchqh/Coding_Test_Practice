#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// absolutes_len은 배열 absolutes의 길이입니다.
// signs_len은 배열 signs의 길이입니다.
int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
    int* sign = (int*)malloc(sizeof(int) * signs_len);
    
    for(int i = 0; i < signs_len; i++){
        if(signs[i]) sign[i] = 1;
        else sign[i] = -1;
    }
    
    int answer = 0;
    int temp = 0;
    
    for(int j = 0; j < absolutes_len; j++){
        temp = absolutes[j] * sign[j];
        answer = answer + temp;
    }
    
    
    return answer;
}