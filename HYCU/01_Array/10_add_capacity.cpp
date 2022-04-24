#include <cstdio>
#include <cstdlib>

struct Array {
    int *arr;
    int size;
    int capacity;
};

void InitArray(Array &array, int cap) {
    array.size = 0;
    array.capacity = cap;
    array.arr = new int[cap];
}

void UninitArray(Array &array) { delete[] array.arr; }

void AddArray(Array &array, int data) { array.arr[array.size++] = data; }

int SizeArray(Array &array) { return array.size; }

int AtArray(Array &array, int index) { return array.arr[index]; }

void RemoveArray(Array &array, int index) {
    for (int i = index; i < array.size - 1; i++) {
        array.arr[i] = array.arr[i + 1];
    }
    array.size -= 1;
}

int main() {
    Array arr;

    InitArray(arr, 10);

    AddArray(arr, 10);
    AddArray(arr, 20);
    AddArray(arr, 30);
    AddArray(arr, 40);
    AddArray(arr, 50);

    RemoveArray(arr, 1);

    for (int i = 0; i < SizeArray(arr); i++) {
        printf("%d\n", AtArray(arr, i));
    }

    UninitArray(arr);
}