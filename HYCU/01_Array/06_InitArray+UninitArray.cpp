#include <cstdio>
#include <cstdlib>

struct Array {
    int arr[5];
    int size;
};

void InitArray(Array &arr) { arr.size = 0; }

void UninitArray(Array &arr) {}

void AddArray(Array &array, int data) { array.arr[array.size++] = data; }

void PrintArray(Array &array) {
    for (int i = 0; i < array.size; i++) {
        printf("%d\n", array.arr[i]);
    }
}

int main() {
    Array arr;

    InitArray(arr);

    AddArray(arr, 10);
    AddArray(arr, 20);
    AddArray(arr, 30);
    AddArray(arr, 40);
    AddArray(arr, 50);

    PrintArray(arr);

    UninitArray(arr);
}