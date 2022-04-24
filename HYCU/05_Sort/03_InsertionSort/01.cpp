#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void Sort(int list[], int size) {
    int index = 4;
    int value = list[4];
    int i;

    for (i = index - 1; i >= 0; --i) {
        if (value < list[i]) {
            list[i + 1] = list[i];
        } else {
            break;
        }
    }

    list[i + 1] = value;
}

void PrintList(int list[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%5d", list[i]);
    }
    printf("\n");
}

int main() {
    int list[10] = {10, 30, 40, 70, 5, 80, 90, 60};

    PrintList(list, 8);
    Sort(list, 8);
    PrintList(list, 8);
}