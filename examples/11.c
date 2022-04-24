#include <stdio.h>

int Sum(int s, int e) {
    int i;
    int sum = 0;
    for (i = s; i <= e; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    printf("%d\n", Sum(1, 3));
    return 0;
}