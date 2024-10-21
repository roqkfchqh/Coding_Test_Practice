#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    if (a % 2 == b % 2)
        if (a % 2 == 1) answer = (a * a) + (b * b);
        else if (a > b) answer = a - b;
        else answer = b - a;
    else answer = 2 * (a + b);
    
    return answer;
}