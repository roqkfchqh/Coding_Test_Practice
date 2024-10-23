#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i = 10;
    int temp = 0;
    for(; i <= n * 10; i = i * 10){
        temp = (n % i) / (i / 10);
        answer += temp;
    }
    return answer;
}