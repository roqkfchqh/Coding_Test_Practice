#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int n) { // 빈 병a개면 콜라 b개를 주는 마트가 빈 병n개를 갖다주면 몇병 받는가
    int answer = 0;
    int coke = 0;
    while(n >= a){
        coke = (n / a) * b;
        answer += coke;
        n = coke + (n % a);
    }
    return answer;
}