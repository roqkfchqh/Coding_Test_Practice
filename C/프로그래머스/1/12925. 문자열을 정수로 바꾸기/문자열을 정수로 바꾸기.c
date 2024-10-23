#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int len = strlen(s);
    int i = 0;
    int answer = 0;
    int sign = 1;

    if(s[0] == '-'){
        sign = -1;
        i++;
    } else if(s[0] == '+'){
        i++;
    }

    for(; i < len; i++){
        answer = answer * 10 + (s[i] - '0');
    }

    return sign * answer;
}