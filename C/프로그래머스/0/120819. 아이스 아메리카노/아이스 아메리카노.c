#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int money) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(3);
    answer[0] = money / 5500;
    answer[1] = money % 5500;
    answer[2] = '\0';
    return answer;
}