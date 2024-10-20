#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    int num = 0;
    while(s1[num]){
        printf("%c\n", s1[num]);
        num++;
    }
    return 0;
}
