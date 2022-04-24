#include <cstdio>
#include <cstdlib>

struct Node {
    int data;
    Node *link;
};

int main() {
    Node n1 = {10, NULL};
    Node n2 = {20, NULL};
    Node n3 = {30, NULL};
    Node n4 = {40, NULL};
    Node n5 = {50, NULL};

    n1.link = &n2;
    n2.link = &n3;
    n3.link = &n4;
    n4.link = &n5;

    Node *head = &n1;

    // Node *p = head;

    // printf("%p\n", head);
    // printf("%d\n", p->data); // n1
    // p = p->link;
    // printf("%d\n", p->data); // n2
    // p = p->link;
    // printf("%d\n", p->data); // n3
    // p = p->link;
    // printf("%d\n", p->data); // n4
    // p = p->link;
    // printf("%d\n", p->data); // n5

    for (Node *p = head; p != NULL; p = p->link) {
        printf("%d\n", p->data);
    }
}