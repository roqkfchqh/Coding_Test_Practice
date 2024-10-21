#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
double solution(int numbers[], size_t numbers_len) {
    int num = 0;
    double sum = 0;
    for(; num <= numbers_len - 1; num++){
        sum = sum + numbers[num];
    }
    double answer = sum / num;
    return answer;
}