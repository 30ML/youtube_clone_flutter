#include <cstdio>
#include <cstdlib>
#include <list>
using namespace std;

int main() {
    list<int> lt;

    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);

    list<int>::iterator startIter = lt.begin();
    list<int>::iterator endIter = lt.end();

    for (; startIter != endIter; ++startIter) {
        printf("%d\n", *startIter);
    }
}