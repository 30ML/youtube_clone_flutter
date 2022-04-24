#include <cstdio>

void Swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

void _Sort(int list[], int left, int right) {
    if (left <= right) {
        // 재귀함수 호출
        int pivot = left;
        int i = left + 1;
        int j = right;

        while (i <= j) {
            while (list[pivot] > list[i]) {
                ++i;
            }

            while (list[pivot] < list[j]) {
                --j;
            }

            if (i <= j) {
                Swap(list[i], list[j]);
            } else {
                break;
            }
        }
        Swap(list[pivot], list[j]);

        _Sort(list, left, j - 1);
        _Sort(list, j + 1, right);
    }
}

void Sort(int list[], int size) { _Sort(list, 0, size - 1); }

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