#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(n * 3 + 1);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) strcpy(&answer[j], "수");
        else strcpy(&answer[j], "박");
        j += 3;
    }
    answer[j] = '\0';
    return answer;
}