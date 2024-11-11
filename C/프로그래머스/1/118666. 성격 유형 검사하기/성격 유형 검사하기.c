#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// survey_len은 배열 survey의 길이입니다.
// choices_len은 배열 choices의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(5);
    int scores[8] = {0};
    const char* mbti = "RTCFJMAN";
    answer[4] = '\0';
    
    for(int i = 0; i < survey_len; i++){
        int score = choices[i] - 4;
        if(score > 0){
            for(int j = 0; j < 8; j++){
                if(mbti[j] == survey[i][1]){
                    scores[j] += score;
                    break;
                }
            }
        } 
        else if(score < 0){
            for(int j = 0; j < 8; j++){
                if(mbti[j] == survey[i][0]){
                    scores[j] -= score;
                    break;
                }
            }
        }
    }
    
    for(int i = 0; i < 4; i++){
        answer[i] = scores[i * 2] >= scores[i * 2 + 1] ? mbti[i * 2] : mbti[i * 2 + 1];
    }

    return answer;
}