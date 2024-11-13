#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// queue1_len은 배열 queue1의 길이입니다.
// queue2_len은 배열 queue2의 길이입니다.
int solution(int queue1[], size_t queue1_len, int queue2[], size_t queue2_len) {
    long long sum1 = 0;
    long long sum2 = 0;
    for(size_t i = 0; i < queue1_len; i++) sum1 += queue1[i];
    for(size_t i = 0; i < queue2_len; i++) sum2 += queue2[i];
    long long total = sum1 + sum2;
    if(total % 2 == 1) return -1;
    long long num = total / 2;

    int start = 0;
    int end = 0;
    int answer = 0;
    int limit = queue1_len * 2 + queue2_len * 2;
    
    while(answer <= limit){
        if(sum1 == num) return answer;
        if(sum1 > num && start >= queue1_len){
            sum1 -= queue2[start % queue1_len];
            start++;
        }else if(sum1 < num && end >= queue2_len){
            sum1 += queue1[end % queue2_len];
            end++;
        }else if(sum1 > num){
            sum1 -= queue1[start % queue1_len];
            start++;
        }else{
            sum1 += queue2[end % queue2_len];
            end++;
        }
        answer++;
    }
    return -1;
}