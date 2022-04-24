#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int Min(int list[], int start, int end) {
    int minIndex = start;

    for (int i = start + 1; i <= end; i++) {
        if (list[minIndex] > list[i]) {
            minIndex = i;
        }
    }

    return minIndex;
}

int main() {
    int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
    int minIndex = Min(list, 0, 7);

    if (minIndex >= 0)
        printf("[%d] : %d\n", minIndex, list[minIndex]);
}