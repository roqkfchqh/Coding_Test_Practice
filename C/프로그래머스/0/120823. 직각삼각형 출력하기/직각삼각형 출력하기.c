#include <stdio.h>

int main(void) {
    int n;
    int i = 0;
    scanf("%d", &n);
    while(i < n){
        printf("*");
        for(int j = 0; j < i; j++){
            printf("*");
        }
        i++;
        printf("\n");
    }
    return 0;
}