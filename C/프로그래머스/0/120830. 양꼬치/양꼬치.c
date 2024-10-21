#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int food = n * 12000;
    int drink = 0;
    
    if(n >= 10){
        k = k - n / 10;
        drink = k * 2000;
    }{
        drink = k * 2000;
    }
    
    int answer = food + drink;
    return answer;
}