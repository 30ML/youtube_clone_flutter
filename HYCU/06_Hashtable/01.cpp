#include <cstdio>
#include <cstdlib>
#include <list>
using namespace std;

int main() {
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);

    list<int>::iterator iterator = lt.begin();
    printf("%d\n", *iterator);
    ++iterator;
    printf("%d\n", *iterator);
    ++iterator;
    printf("%d\n", *iterator);
}