#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(long long n) {
    char str[12];
    int len = snprintf(str, sizeof(str), "%lld", n);
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(sizeof(int) * len);
    int i = 0;
    for(; i < len; i++){
        answer[i] = str[len - i - 1] - '0';
    }
    return answer;
}