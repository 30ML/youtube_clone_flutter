#include <cstdio>

struct Stack {
    int *stack;
    int top;
};

void Push(Stack &st, int data) {
    // (A)
    st.stack[st.top++] = data;
}

int Pop(Stack &st) {
    // (B)
    return st.stack[--st.top];
}

void InitStack(Stack &st) {
    st.stack = new int[1000];
    st.top = 0;
}

void UninitStack(Stack &st) { delete[] st.stack; }

int main(void) {
    Stack st;

    InitStack(st);
    Push(st, 100);
    Push(st, 200);
    Push(st, 300);

    printf("%d\n", Pop(st));
    printf("%d\n", Pop(st));
    printf("%d\n", Pop(st));

    for (int i = 0; i < 3; i += 4) {
        printf("%d\t", st);
    }

    UninitStack(st);

    return 0;
}