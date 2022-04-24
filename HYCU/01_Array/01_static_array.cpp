#include <cstdio>

void ArrayTest() {
    /* 정적 배열 */
    int arr[5] = {10, 20, 30, 40, 50};
    // Compile Time에 메모리 공간이 결정됨.
    // Stack에 생성.

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    ArrayTest();
    ArrayTest();
    ArrayTest();
}
