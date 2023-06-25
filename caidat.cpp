#include "thuvien.h"
void khoiTao(nodePtr &head) {
    head = NULL;
}

nodePtr taoNode(TYPEINFO x) {
    nodePtr n = new node;
    n -> data = x;
    n -> link = NULL;
    return n;
}

void themDau(nodePtr &head, TYPEINFO x) {
    nodePtr n = taoNode(x);
    n -> link = head;
    head = n;
}

void themCuoi(nodePtr &head, TYPEINFO x) {
    nodePtr t = head;
    nodePtr n = taoNode(x);
    if (head == NULL) head = n;
    else {
        while (t -> link != NULL) {
            t = t -> link;
        }
        t -> link = n;
    }
}

void themSauHead(nodePtr &head, TYPEINFO x) {
    nodePtr t = head;
    nodePtr n = taoNode(x);
    if (head == NULL) head = n;
    else {
        n -> link = t -> link;
        t -> link = n;
    }
}

void xoaDau(nodePtr &head) {
    nodePtr t = head;
    head = head -> link;
    delete t;
}

void xoaCuoi(nodePtr &head) {
    nodePtr t = head;
    if (head == NULL) return;
    else {
        while (t -> link -> link != NULL) {
            t = t -> link;
        }
        delete t -> link;
        t -> link = NULL;
    }
}

void xoaX(nodePtr &head, TYPEINFO x) {
    nodePtr t = head;
    nodePtr before = NULL;
    if (head == NULL) return;
    if (head -> data == x) xoaDau(head);
    else {
        while (t != NULL && t -> data != x) {
            before = t;
            t = t -> link;
        }
        if (t != NULL) {
            before -> link = t -> link;
            delete t;
        }
    }
}

void demNode(nodePtr &head, TYPEINFO &dem) {
    nodePtr t = head;
    while (t != NULL) {
        dem++;
        t = t -> link;
    }
    cout << "Trong list tren co: " << dem << " node" << endl;
}

void vitriNode(nodePtr head, TYPEINFO dem) {
    nodePtr t = head;
    for (int i = 0; i < dem; i++) {
        cout << "(" << i << ")" << t -> data << " ";
        t = t -> link;
    }
    cout << endl;
}

void nodeChinhXac(nodePtr head, TYPEINFO x) {
    nodePtr t = head;
    int dem = 0;
    while (t != NULL && t -> data != x) {
        t = t -> link;
        dem++;
    }
    cout << "(" << dem << ")" <<  t -> data << endl;

}

void print(nodePtr head) {
    nodePtr t = head;
    while (t != NULL) {
        cout << t -> data << " ";
        t = t -> link;
    }
}