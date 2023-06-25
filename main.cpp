#include "thuvien.h"
int main() {
    nodePtr head;
    TYPEINFO dem = 0;

    themDau(head, 10);
    themDau(head, 20);
    themDau(head, 30);
    themCuoi(head, 100);
    themSauHead(head, 300);
//    xoaDau(head);
//    xoaCuoi(head);
//    xoaX(head, 20);

    demNode(head, dem);
    vitriNode(head, dem);
    nodeChinhXac(head, 20);
    print(head);
    return 0;
}
