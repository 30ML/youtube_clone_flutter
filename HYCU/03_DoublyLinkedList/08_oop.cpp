#include <cstdio>
#include <cstdlib>

struct Node {
    int data;
    Node *prev;
    Node *next;
};

class List {
  private:
    Node *head;
    Node *tail;

  private:
    Node *AllocNode(int data) {
        Node *node = new Node;
        node->data = data;
        node->prev = node->next = NULL;

        return node;
    }

  public:
    void Add(int data) {
        Node *p = AllocNode(data);
        Node *ptail = tail->prev;
        ptail->next = p;
        p->prev = ptail;
        p->next = tail;
        tail->prev = p;
    }

    void PrintNextList() {
        for (Node *p = head->next; p != tail; p = p->next) {
            printf("%d\n", p->data);
        }
    }

    void PrintPrevList() {
        for (Node *p = tail->prev; p != head; p = p->prev) {
            printf("%d\n", p->data);
        }
    }

    List() {
        head = AllocNode(0);
        tail = AllocNode(0);

        head->next = tail;
        tail->prev = head;
    }

    ~List() {
        for (Node *p = head; p != NULL;) {
            Node *tempNode = p->next;
            delete p;
            p = tempNode;
        }
    }
};

int main() {
    List lt;

    lt.Add(10);
    lt.Add(20);
    lt.Add(30);

    lt.PrintNextList();
    printf("\n");
    lt.PrintPrevList();
}