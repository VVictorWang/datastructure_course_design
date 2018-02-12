
#include "AVL.h"
int main() {
    AVL<int> *test = new AVL<int>;
    test->insert(4);
    test->insert(89);
    test->insert(90);
    test->display();
    return 0;
}