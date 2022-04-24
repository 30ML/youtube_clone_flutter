#include <stdio.h>

int main(void) {
    int age = 0;
    printf("당신의 나이는?");
    scanf("%d", &age);

    printf("당신의 나이는 %d입니다.\n", age);

    return 0;
}