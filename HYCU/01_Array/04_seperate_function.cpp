#include <cstdio>
#include <cstdlib>

void AddArray(int *arr, int &size, int data) { arr[size++] = data; }
void PrintArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int arr[5] = {0};
    int size = 0;

    // arr[size++] = 10;
    // arr[size++] = 20;
    // arr[size++] = 30;
    // arr[size++] = 40;
    // arr[size++] = 50;

    AddArray(arr, size, 10);
    AddArray(arr, size, 20);
    AddArray(arr, size, 30);
    AddArray(arr, size, 40);
    AddArray(arr, size, 50);

    PrintArray(arr, size);
}