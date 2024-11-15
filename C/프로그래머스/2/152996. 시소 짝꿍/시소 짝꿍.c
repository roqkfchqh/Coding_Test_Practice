#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 1001

int hashtable[MAX] = {0};   //무게배열

// weights_len은 배열 weights의 길이입니다.
long long solution(int weights[], size_t weights_len) {
    long long answer = 0;
    
    for(int i = 0; i < weights_len; i++){
        hashtable[weights[i]]++;
    }
    
    for (int c = 100; c <= 1000; c++) {
        if (hashtable[c] > 0) {
            answer += (long long)hashtable[c] * (hashtable[c] - 1) / 2; //같은무게nC2

            if(c * 4 % 3 == 0){
                answer += (long long)hashtable[c] * hashtable[c * 4 / 3]; //4 3
            }

            if (c * 2 <= 1000) {
                answer += (long long)hashtable[c] * hashtable[c * 2]; //4 2
            }

            if (c * 3 % 2 == 0) {
                answer += (long long)hashtable[c] * hashtable[c * 3 / 2]; //3 2
            }
        }
    }
    return answer;
}