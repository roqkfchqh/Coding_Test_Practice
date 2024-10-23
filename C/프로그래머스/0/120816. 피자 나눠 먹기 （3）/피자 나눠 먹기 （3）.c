#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = n / slice;
    if(n % slice) answer ++;
    return answer;
}