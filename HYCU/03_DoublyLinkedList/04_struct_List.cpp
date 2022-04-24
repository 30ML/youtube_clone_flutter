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

void AddNode(List &list, int data) {
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

int main() {
    List lt;
    lt.head = AllocNode(0);
    lt.tail = AllocNode(0);

    lt.head->next = lt.tail;
    lt.tail->prev = lt.head;

    AddNode(lt, 10);
    AddNode(lt, 20);
    AddNode(lt, 30);

    // Node *p = AllocNode(10);
    // Node *ptail = tail->prev;
    // ptail->next = p;
    // p->prev = ptail;
    // p->next = tail;
    // tail->prev = p;

    // p = AllocNode(20);
    // ptail = tail->prev;
    // ptail->next = p;
    // p->prev = ptail;
    // p->next = tail;
    // tail->prev = p;

    // p = AllocNode(30);
    // ptail = tail->prev;
    // ptail->next = p;
    // p->prev = ptail;
    // p->next = tail;
    // tail->prev = p;

    PrintNextList(lt);
    printf("\n");
    PrintPrevList(lt);
}