#include <cstdio>

int Fibonacci(int n) {
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
}

int main() { printf("%d\n", Fibonacci(5)); }