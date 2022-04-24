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
    Node *head = NULL;
    Node *tail = NULL;

    Node *p = AllocNode(10);
    head = tail = p;

    p = AllocNode(20);
    tail->next = p;
    p->prev = tail;
    tail = p;

    p = AllocNode(30);
    tail->next = p;
    p->prev = tail;
    tail = p;

    printf("%d\n", head->data);
    printf("%d\n", head->next->data);
    printf("%d\n", head->next->next->data);

    printf("%d\n", tail->data);
    printf("%d\n", tail->prev->data);
    printf("%d\n", tail->prev->prev->data);
}