#include <iostream>
using namespace std;
typedef int TYPEINFO;
struct node {
    TYPEINFO data;
    node *link;
};
typedef node *nodePtr;
void themDau(nodePtr &h, TYPEINFO x);
void themCuoi(nodePtr &h, TYPEINFO x);
void chenSauH(nodePtr &h, TYPEINFO x);
void xoaDau(nodePtr &h);
void xoaCuoi(nodePtr &h);
void xoaX(nodePtr &h, TYPEINFO x);
void demNode(nodePtr h, TYPEINFO &dem);
void hoanDoi(nodePtr &h);
void themChan(nodePtr &h, nodePtr &hChan);
void print(nodePtr h);



#ifndef TESTINGONLY_THUVIEN_H
#define TESTINGONLY_THUVIEN_H

#endif //TESTINGONLY_THUVIEN_H
