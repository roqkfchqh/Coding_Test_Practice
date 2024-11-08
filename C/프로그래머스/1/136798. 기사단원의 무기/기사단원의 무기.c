#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int limit, int power) {
    int answer = 0;
    for(int i = 1; i <= number; i++){
    int fe = 0;
        for(int j = 1; j * j <= i; j++){
            if(i % j == 0){
                fe++;
                if(j != i / j){
                    fe++;
                }
            }  
        }
        if(fe > limit){
            fe = power;
        }
    answer += fe;
    }
    return answer;
}
