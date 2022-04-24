#include <cstdio>
#include <cstdlib>

struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *AllocNode(int data) {
    Node *n = new Node;
    n->data = data;
    n->prev = n->next = NULL;

    return n;
}

int main() {
    Node *head = AllocNode(0);
    Node *tail = AllocNode(0);
    head->next = tail;
    tail->prev = head;

    Node *p = AllocNode(10);
    Node *ptail = tail->prev;
    ptail->next = p;
    p->prev = ptail;
    p->next = tail;
    tail->prev = p;

    p = AllocNode(20);
    ptail = tail->prev;
    ptail->next = p;
    p->prev = ptail;
    p->next = tail;
    tail->prev = p;

    p = AllocNode(30);
    ptail = tail->prev;
    ptail->next = p;
    p->prev = ptail;
    p->next = tail;
    tail->prev = p;

    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);
    printf("%d\n", head->next->next->next->data);

    printf("\n");

    printf("%d\n", tail->prev->data);
    printf("%d\n", tail->prev->prev->data);
    printf("%d\n", tail->prev->prev->prev->data);
}