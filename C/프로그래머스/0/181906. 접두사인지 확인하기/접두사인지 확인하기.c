#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    int answer = 1;
    int i = 0;
    int l = 0;
    for(; is_prefix[i]; i++){
        if(is_prefix[i] != my_string[i]) answer = 0;
    }
    while(my_string[l]){
        l++;
    }
    if(i > l) answer = 0;
    return answer;
}