#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    long long big = 0;
    long long small = 0;
    
    if(a == b) return a;   
    if(a > b) big = a, small = b;
    else if(b > a) big = b, small = a;      // 큰 값을 big에, 작은 값을 small에, a와 b가 같다면 answer = a
    
    answer = (big - small + 1) * (a + b) / 2;
    
    return answer;
}