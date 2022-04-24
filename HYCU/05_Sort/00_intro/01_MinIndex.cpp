#include <cstdio>

int Min(int list[], int size) {
    int min = 0;

    for (int i = 1; i < size; ++i) {
        if (list[min] > list[i]) {
            min = i;
        }
    }

    return min;
}

int main() {
    int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
    int minIndex = Min(list, 8);

    if (minIndex >= 0)
        printf("[%d] : %d\n", minIndex, list[minIndex]);
}