#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = hp / 5;
    if(hp % 5) answer += (hp % 5) / 3;
    if((hp % 5) % 3) answer += (hp % 5) % 3;
    return answer;
}