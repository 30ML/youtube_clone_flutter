#include <cstdio>

int Factorial(int n) {
    if (n == 1) {
        return n;
    }

    return n * Factorial(n - 1);
}

int main() { printf("%d\n", Factorial(5)); }