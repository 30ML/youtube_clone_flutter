#include <cstdio>

void Factorial(int n, int &result) { // out parameter
    if (n == 1) {
        result = 1;
    } else {
        Factorial(n - 1, result);
        result = n * result;
    }
}

int main() {
    int fact = 0;

    Factorial(5, fact);

    printf("%d\n", fact);
}