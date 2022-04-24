#include <cstdio>
#include <cstdlib>
#include <list>
using namespace std;

int main() {
    list<int> lt;

    lt.push_back(10);
    lt.push_front(100);
    lt.push_back(20);
    lt.push_back(30);

    for (list<int>::iterator startIter = lt.begin(); startIter != lt.end();
         ++startIter) {
        printf("%d\n", *startIter);
    }
}