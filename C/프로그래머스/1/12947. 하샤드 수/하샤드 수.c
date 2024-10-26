#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int num = x;
    
    while(x){
        sum += x % 10;
        x /= 10;
    }
    
    if(num % sum != 0) answer = false; 
    
    return answer;
}