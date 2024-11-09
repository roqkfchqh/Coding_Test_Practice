#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool skip_char(const char* skip, char sc) {     // skip 할 문자 건너뛰게끔 bool로 반환
    for(int i = 0; i < strlen(skip); i++){
        if(sc == skip[i]) return true;
    }
    return false;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s, const char* skip, int index) {
    int s_len = strlen(s);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(s_len + 1);
    for(int i = 0; i < s_len; i++){
        int temp = s[i];
        int count = 0;
        while(count < index){
            temp++;
            if(temp > 122) temp -= 26;
            if(!skip_char(skip, temp)) count++;
        }
        answer[i] = (char)temp;
    }
    answer[s_len] = '\0';
    return answer;
}