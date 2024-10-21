#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    a % 2 == 1 ? printf("%d is odd", a) : printf("%d is even", a);
    return 0;
}