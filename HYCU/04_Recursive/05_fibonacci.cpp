#include <cstdio>

void Fibonacci(int n, int &result) {
    if (n == 1) {
        result = 1;
    } else if (n == 2) {
        result = 2;
    } else {
        int f1, f2;

        Fibonacci(n - 1, f1);
        Fibonacci(n - 2, f2);

        result = f1 + f2;
    }
}

int main() {
    int fibo;

    Fibonacci(5, fibo);

    printf("%d\n", fibo);
}