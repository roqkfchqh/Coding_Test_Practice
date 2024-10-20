#include <stdio.h>
#define LEN_INPUT 11

int main(void) {
    char s1[LEN_INPUT];
    int a, num = 1;
    scanf("%s %d", s1, &a);
    for(; num <= a; num++){
        printf("%s", s1);
    }
    return 0;
}