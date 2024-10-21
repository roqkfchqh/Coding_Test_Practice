#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 0;
    int answer = 0;
    for(; i <= n; i+=2){
        answer = answer + i;
    }
    return answer;
}