#include <cstdio>
#include <cstdlib>

struct Node {
    int data;
    Node *prev;
    Node *next;
};

struct List {
    Node *head;
    Node *tail;
};

Node *AllocNode(int data) {
    Node *node = new Node;
    node->data = data;
    node->prev = node->next = NULL;

    return node;
}

void AddList(List &list, int data) {
    Node *p = AllocNode(data);
    Node *ptail = list.tail->prev;
    ptail->next = p;
    p->prev = ptail;
    p->next = list.tail;
    list.tail->prev = p;
}

void PrintNextList(List &list) {
    printf("%d\n", list.head->next->data);
    printf("%d\n", list.head->next->next->data);
    printf("%d\n", list.head->next->next->next->data);
}

void PrintPrevList(List &list) {
    printf("%d\n", list.tail->prev->data);
    printf("%d\n", list.tail->prev->prev->data);
    printf("%d\n", list.tail->prev->prev->prev->data);
}

void InitList(List &list) {
    list.head = AllocNode(0);
    list.tail = AllocNode(0);

    list.head->next = list.tail;
    list.tail->prev = list.head;
}

void UninitLIst(List &list) {
    // delete[] list;
}

int main() {
    List lt;

    InitList(lt);

    AddList(lt, 10);
    AddList(lt, 20);
    AddList(lt, 30);

    PrintNextList(lt);
    printf("\n");
    PrintPrevList(lt);
}