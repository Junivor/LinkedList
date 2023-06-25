#include <iostream>
using namespace std;
typedef int TYPEINFO;
struct node {
    TYPEINFO data;
    node *link;
};
typedef node *nodePtr;
void themDau(nodePtr &head, TYPEINFO x);
void print(nodePtr head);
void themCuoi(nodePtr &head, TYPEINFO x);
void themSauHead(nodePtr &head, TYPEINFO x);
void xoaDau(nodePtr &head);
void xoaCuoi(nodePtr &head);
void xoaX(nodePtr &head, TYPEINFO x);
void demNode(nodePtr &head, TYPEINFO &dem);
void vitriNode(nodePtr head, TYPEINFO dem);
void nodeChinhXac(nodePtr head, TYPEINFO x);
#ifndef TESTINGONLY_THUVIEN_H
#define TESTINGONLY_THUVIEN_H

#endif //TESTINGONLY_THUVIEN_H
