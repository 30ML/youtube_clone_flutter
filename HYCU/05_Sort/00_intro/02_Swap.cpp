#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int a = 10;
    int b = 20;
    Swap(a, b);

    printf("%d %d\n", a, b);
}