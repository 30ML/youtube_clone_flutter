#include <cstdio>
#include <cstdlib>
#include <list>
using namespace std;

list<int> table[10];

int HashFunction(int key) {
    int addr = key % 10;
    return addr;
}

void PushHash(int key) {
    int addr = HashFunction(key);
    table[addr].push_back(key);
}

bool FindHash(int key) { return false; }

void PrintHash() {
    for (int i = 0; i < 10; i++) {
        printf("[%d]: ", i);
        for (list<int>::iterator iter = table[i].begin();
             iter != table[i].end(); ++iter) {
            printf("%d ", *iter);
        }
        printf("\n");
    }
}

int main() {
    PushHash(10);
    PushHash(57);
    PushHash(65);
    PushHash(59);
    PushHash(32);
    PushHash(197);

    PrintHash();
}