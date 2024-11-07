#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    int s_len = strlen(s);
    char* temp = (char*)malloc(s_len + 1);
    char* answer = (char*)malloc(s_len + 1);
    
    for (int i = 0; i < s_len; i++) {
        temp[i] = s[i];
    }
    temp[s_len] = '\0';

    for (int i = 0; i < s_len - 1; i++) {
        for (int j = 0; j < s_len - i - 1; j++) {
            if (temp[j] < temp[j + 1]) {
                char swap = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = swap;
            }
        }
    }
    
    strcpy(answer, temp);
    free(temp);

    return answer;
}