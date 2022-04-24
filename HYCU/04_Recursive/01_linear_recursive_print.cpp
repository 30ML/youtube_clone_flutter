#include <cstdio>

void Print(int n) {
    printf("start: +%d\n", n);

    if (n > 0)
        Print(n - 1);

    printf("end: -%d\n", n);
}

int main() { Print(3); }