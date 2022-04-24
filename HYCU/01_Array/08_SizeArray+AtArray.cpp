#include <cstdio>
#include <cstdlib>

struct Array {
    int *arr;
    int size;
};

void InitArray(Array &array, int cap) {
    array.size = 0;
    array.arr = new int[cap];
}

void UninitArray(Array &array) { delete[] array.arr; }

void AddArray(Array &array, int data) { array.arr[array.size++] = data; }

int SizeArray(Array &array) { return array.size; }

int AtArray(Array &array, int index) { return array.arr[index]; }

// void PrintArray(Array &array) {
//     for (int i = 0; i < array.size; i++) {
//         printf("%d\n", array.arr[i]);
//     }
// }

int main() {
    Array arr;

    InitArray(arr, 10);

    AddArray(arr, 10);
    AddArray(arr, 20);
    AddArray(arr, 30);
    AddArray(arr, 40);
    AddArray(arr, 50);

    for (int i = 0; i < SizeArray(arr); i++) {
        printf("%d\n", AtArray(arr, i));
    }

    UninitArray(arr);
}