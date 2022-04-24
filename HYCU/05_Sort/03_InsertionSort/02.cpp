#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void Sort(int list[], int size) {
    for (int index = 1; index < size; ++index) {
        int value = list[index];
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