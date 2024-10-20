#include <stdio.h>
#define LEN_INPUT 10
#include <string.h>

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int num = 0;
    while(s1[num]){
        if(s1[num] >= 'a' && s1[num] <= 'z'){
            printf("%c", s1[num]-32);
            num++;
        } else {
            printf("%c", s1[num]+32);
            num++;
        }
    }
    return 0;
}
