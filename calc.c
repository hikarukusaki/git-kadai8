#include <stdio.h>

int main(void) {
    int a = 10;
    int b = 5;

    printf("sum = %d\n", a + b);
    printf("difference = %d\n", a - b);

    printf("max = %d\n", (a > b) ? a : b);

    return 0;
}
