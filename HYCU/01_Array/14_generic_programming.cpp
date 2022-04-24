#include <cstdio>
#include <cstdlib>

template <typename T>

class Array {
  private:
    T *arr;
    int size;
    int capacity;

  public:
    Array(int cap) {
        size = 0;
        capacity = cap;
        arr = new T[cap];
    }

    ~Array() { delete[] arr; }

    void Add(T data) { arr[size++] = data; }

    int Size() { return size; }

    T At(int index) { return arr[index]; }

    void Remove(int index) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size -= 1;
    }
};

int main() {
    Array<double> arr(10);

    arr.Add(10);
    arr.Add(20);
    arr.Add(30);
    arr.Add(40);
    arr.Add(50);

    arr.Remove(1);

    for (int i = 0; i < arr.Size(); i++) {
        printf("%g\n", arr.At(i));
    }
}