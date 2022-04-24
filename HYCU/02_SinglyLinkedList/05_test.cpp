#include <cstdio>
#include <cstdlib>

struct Node {
    int data;
    Node *link;
};

Node *AllocNode(int data) {
    Node *n = new Node;
    n->data = data;
    return n;
}

int main() {
    Node *head = NULL;

    head = AllocNode(10);
    Node *pp = head->link = AllocNode(20);
    head->link->link = AllocNode(30);
    Node *p = head->link->link->link = AllocNode(40);

    delete pp->link;
    pp->link = p;

    printf("%d\n", head->data);
    printf("%d\n", head->link->data);
    printf("%d\n", head->link->link->data);
}