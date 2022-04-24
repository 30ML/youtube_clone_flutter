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
    head->link = AllocNode(20);
    head->link->link = AllocNode(30);
    head->link->link->link = AllocNode(40);
    head->link->link->link->link = AllocNode(50);
}