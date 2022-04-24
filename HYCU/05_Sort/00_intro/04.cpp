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

void Sort(int list[], int size) {
    for (int i = 0; i < size; i++) {
        int min = Min(list, i, size - 1);
        Swap(list[i], list[min]);
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

    PrintList(list, 8);
    Sort(list, 8);
    PrintList(list, 8);

    // if (minIndex >= 0)
    //     printf("[%d] : %d\n", minIndex, list[minIndex]);
}