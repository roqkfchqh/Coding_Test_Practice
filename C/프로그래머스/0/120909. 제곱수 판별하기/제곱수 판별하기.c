#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int i = 0;
    int answer = 2;
    for(; i <= 1000; i++){
        if((i * i) == n) {
        answer = 1;
        break;
        }
    }
    return answer;
}