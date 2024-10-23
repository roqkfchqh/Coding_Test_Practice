#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int len = strlen(s);
    int i = 0;
    int j = pow(10, len - 1);
    int answer = 0;
    
    if(s[0] == '+' || s[0] == '-'){   
        i++;
        j = j / 10;
    }
    
    for(; i < len; i++){
        answer += j * (s[i] - 48);
        j = j / 10;
    }
    
    if(s[0] == '-'){
        answer =- answer;
    }
    
    return answer;
}