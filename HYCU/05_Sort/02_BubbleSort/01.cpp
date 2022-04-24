#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void Sort(int list[], int size) {
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < (size - 1) - j; i++) {
            if (list[i] > list[i + 1]) {
                Swap(list[i], list[i + 1]);
            }
        }
    }
}

void PrintList(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%5d", list[i]);
    }
    printf("\n");
}

int main() {
    int list[10] = {40, 30, 10, 70, 50, 80, 90, 60};
    // int list[10] = {10, 30, 40, 70, 5, 80, 90, 60};

    PrintList(list, 8);
    Sort(list, 8);
    PrintList(list, 8);
}