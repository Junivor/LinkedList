#include "thuvien.h"
nodePtr taoNode(TYPEINFO x) {
    nodePtr n = new node;
    n -> data = x;
    n -> link = NULL;
    return n;
}

void themDau(nodePtr &h, TYPEINFO x) {
    nodePtr n = taoNode(x);
    n -> link = h;
    h = n;
}

void themCuoi(nodePtr &h, TYPEINFO x) {
    nodePtr t = h;
    nodePtr n = taoNode(x);
    if (h == NULL) h = n;
    else {
        while (t -> link != NULL) {
            t = t -> link;
        }
        t -> link = n;
    }
}

void chenSauH(nodePtr &h, TYPEINFO x) {
    nodePtr t = h;
    nodePtr n = taoNode(x);
    if (h == NULL) h = n;
    else {
        n -> link = t -> link;
        t -> link = n;
    }
}

void hoanDoi(nodePtr &h) {
    nodePtr current = h;
    nodePtr next = NULL;
    nodePtr prev = NULL;
    while (current != NULL) {
        next = current -> link;
        current -> link = prev;
        prev = current;
        current = next;
    }
    h = prev;
}

void xoaDau(nodePtr &h) {
    nodePtr t = h;
    h = h -> link;
    delete t;
}

void xoaCuoi(nodePtr &h) {
    nodePtr t = h;
    if (h == NULL) return;
    else {
        while (t -> link -> link ) {
            t = t -> link;
        }
        delete t -> link;
        t -> link = NULL;
    }
}

void xoaX(nodePtr &h, TYPEINFO x) {
    nodePtr t = h;
    nodePtr before = NULL;
    if (t == NULL) return;
    if (h -> data == x) xoaDau(h);
    else {
        while (t -> link != NULL && t -> data != x) {
            before = t;
            t = t -> link;
        }
        if (t != NULL) {
            before -> link = t -> link;
            t -> link = before;
        }
    }
}

void themChanLe(nodePtr &h, nodePtr &hChan, nodePtr &hLe) {
    nodePtr t = h;
    for(; t != NULL; t = t -> link) {
        if (t -> data % 2 == 0) {
            themCuoi(hChan, t -> data);
        } else {
            themCuoi(hLe, t -> data);
        }
    }
}

void print(nodePtr h) {
    nodePtr t = h;
    while (t != NULL) {
        cout << t -> data << " ";
        t = t -> link;
    }
    cout << endl;
}