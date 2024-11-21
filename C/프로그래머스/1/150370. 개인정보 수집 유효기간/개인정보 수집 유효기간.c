#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len, size_t* result_size) {
    char temp[2000];
    char* terms_A[1000];
    int terms_1[1000];
    
    for(int i = 0; i < terms_len; i++){
        strcpy(temp, terms[i]);
        char* token1 = strtok(temp, " ");
        char* token2 = strtok(NULL, " ");
        if(token1 != NULL && token2 != NULL){
            terms_A[i] = malloc(strlen(token1) + 1);
            strcpy(terms_A[i], token1);
            terms_1[i] = atoi(token2);
        }
    }
    
    char todayy[20];
    strcpy(todayy, today);
    int yearr = atoi(strtok(todayy, "."));
    int monthh = atoi(strtok(NULL, "."));
    int dayy = atoi(strtok(NULL, "."));

    int* answer = (int*)malloc(sizeof(int) * privacies_len);
    int index = 0;

    for(size_t i = 0; i < privacies_len; i++){
        char temp2[10000];
        strcpy(temp2, privacies[i]);

        int year = atoi(strtok(temp2, "."));
        int month = atoi(strtok(NULL, "."));
        int day = atoi(strtok(NULL, " "));
        char* term = strtok(NULL, " ");

        int duration = 0;
        bool found = false;
        for(int j = 0; j < terms_len; j++){
            if(strcmp(term, terms_A[j]) == 0){
                duration = terms_1[j];
                found = true;
                break;
            }
        }

        if(!found){
            continue;
        }

        month += duration;
        if(month > 12){
            year += (month - 1) / 12;
            month = (month - 1) % 12 + 1;
        }

        bool dead = false;
        if(yearr > year){
            dead = true;
        }else if(yearr == year){
            if(monthh > month){
                dead = true;
            }else if(monthh == month){
                if(dayy >= day){
                    dead = true;
                }
            }
        }

        if(dead){
            answer[index++] = i + 1;
        }
    }

    for(int i = 0; i < terms_len; i++){
        free(terms_A[i]);
    }

    *result_size = index;
    answer = realloc(answer, sizeof(int) * index);
    return answer;
}