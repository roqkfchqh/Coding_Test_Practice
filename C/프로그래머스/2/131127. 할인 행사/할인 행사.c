#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 10
#define MAX_DAYS 100000

// want_len은 배열 want의 길이입니다.
// number_len은 배열 number의 길이입니다.
// discount_len은 배열 discount의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

int match(int* discount_window, int* number, int want_len){
    for(int i = 0; i < want_len; i++){
        if(discount_window[i] != number[i]){
            return 0;
        }
    }
    return 1;
}

int solution(const char* want[], size_t want_len, int number[], size_t number_len, const char* discount[], size_t discount_len){
    int answer = 0;
    int discount_window[MAX_PRODUCTS] = {0};

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < want_len; j++){
            if(strcmp(discount[i], want[j]) == 0){
                discount_window[j]++;
                break;
            }
        }
    }

    if(match(discount_window, number, want_len)){
        answer++;
    }

    for(int i = 10; i < discount_len; i++){
        for(int j = 0; j < want_len; j++){
            if(strcmp(discount[i - 10], want[j]) == 0){
                discount_window[j]--;
                break;
            }
        }

        for(int j = 0; j < want_len; j++){
            if(strcmp(discount[i], want[j]) == 0){
                discount_window[j]++;
                break;
            }
        }

        if(match(discount_window, number, want_len)){
            answer++;
        }
    }

    return answer;
}