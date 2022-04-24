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
    for (Node *p = list.head->next; p != list.tail; p = p->next) {
        printf("%d\n", p->data);
    }
}

void PrintPrevList(List &list) {
    for (Node *p = list.tail->prev; p != list.head; p = p->prev) {
        printf("%d\n", p->data);
    }
}

void InitList(List &list) {
    list.head = AllocNode(0);
    list.tail = AllocNode(0);

    list.head->next = list.tail;
    list.tail->prev = list.head;
}

void UninitList(List &list) {
    for (Node *p = list.head; p != NULL;) {
        Node *tempNode = p->next;
        delete p;
        p = tempNode;
    }
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

    UninitList(lt);
}