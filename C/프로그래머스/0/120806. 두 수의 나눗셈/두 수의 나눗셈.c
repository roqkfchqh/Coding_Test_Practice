#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    int num3 = 1000;
    int answer = (float)num1 / (float)num2 * num3;
    return answer;
}