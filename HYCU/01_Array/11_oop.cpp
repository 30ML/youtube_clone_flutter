#include <cstdio>
#include <cstdlib>

struct Array {
    int *arr;
    int size;
    int capacity;

    void InitArray(int cap) {
        size = 0;
        capacity = cap;
        arr = new int[cap];
    }

    void UninitArray() { delete[] arr; }

    void AddArray(int data) { arr[size++] = data; }

    int SizeArray() { return size; }

    int AtArray(int index) { return arr[index]; }

    void RemoveArray(int index) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
};

int main() {
    Array arr;

    arr.InitArray(10);

    arr.AddArray(10);
    arr.AddArray(20);
    arr.AddArray(30);
    arr.AddArray(40);
    arr.AddArray(50);

    arr.RemoveArray(1);

    for (int i = 0; i < arr.SizeArray(); i++) {
        printf("%d\n", arr.AtArray(i));
    }

    arr.UninitArray();
}