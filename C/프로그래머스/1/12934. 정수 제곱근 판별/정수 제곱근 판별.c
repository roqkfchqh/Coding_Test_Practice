#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    long long sqrt_n = (long long)sqrt(n);
    long long answer = 0;
    
    printf("%d",sqrt_n);
    
    if(sqrt_n * sqrt_n == n) answer = (sqrt_n + 1) * (sqrt_n + 1);
    else answer = -1;
    
    return answer;
}