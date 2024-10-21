#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = price;
    if(price >= 500000) answer = price * 0.8;
    else if(price >= 300000 && price < 500000) answer = price * 0.9;
    else if(price >= 100000 && price < 300000) answer = price * 0.95;
    return answer;
}