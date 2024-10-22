#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int answer_len = (n + 1) / 2;
    int j = 1;
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * answer_len);
    for(int i = 0; i < answer_len; i++){
        answer[i] = j;
        j += 2;
    }
    
    return answer;
}