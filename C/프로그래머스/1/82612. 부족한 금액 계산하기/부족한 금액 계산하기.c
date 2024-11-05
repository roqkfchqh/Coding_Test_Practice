#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    int i = 0;
    long long inc_price = 0;
    long long answer = -1;
    long long total = 0;
    while(i < count){
        i++;
        inc_price = price * i;
        total += inc_price ;
    }
    if(money < total) answer = total - money; 
    else answer = 0;
    return answer;
}