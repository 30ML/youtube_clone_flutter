#include <stdio.h>

int main(void) {
    int a = 15, r = 8;
    r = a++;
    printf("%d", a);

    return 0;
}