
#include <cstring>
#include "AVL.h"
#include "header.h"

template<typename T>
void myVisit(T data) {
    cout << data << '\t';
}

int main() {
    AVL<int> *test = new AVL<int>;
    test->insert(4);
    test->insert(89);
    test->insert(90);
    test->insert(77);
    test->display();
    AVL<int> *my = new AVL<int>;
    my->insert(77);
    my->insert(4);
    my->insert(89);
    List<int> lo = test->avl_difference(*my);
    lo.travser(myVisit);
    InfoNode node;
    strcpy(node.data.givenname, "sd");
    cout << node.data.givenname;

    return 0;
}