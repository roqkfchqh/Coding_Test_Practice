#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool solution(const char* s) {
    int s_len = strlen(s);
    if(s_len != 4 && s_len != 6) return false;    
    for(int i = 0; i < s_len; i++){
        if(s[i] < '0' || s[i] > '9') return false;
    }
    return true;
}