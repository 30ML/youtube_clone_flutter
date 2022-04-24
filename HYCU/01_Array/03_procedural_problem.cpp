#include <cstdio>

int main() {
    /* 동적 배열 */
    int *arr = new int[5];

    int n = 10;
    arr = &n; // FIX

    // 초기화
    for (int i = 0; i < 5; i++) {
        arr[i] = 10 * (i + 1);
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }

    // 메모리 해제
    delete[] arr;
}
