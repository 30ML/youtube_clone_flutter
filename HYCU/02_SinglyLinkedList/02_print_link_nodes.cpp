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

    printf("%p\n", head);
    printf("%d\n", head->data);                         // n1
    printf("%d\n", head->link->data);                   // n2
    printf("%d\n", head->link->link->data);             // n3
    printf("%d\n", head->link->link->link->data);       // n4
    printf("%d\n", head->link->link->link->link->data); // n5
}