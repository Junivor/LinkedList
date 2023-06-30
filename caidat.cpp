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

void xoaDau(nodePtr &h) {
    nodePtr t = h;
    if (h == NULL) return;
    else {
        h = h -> link;
        delete t;
    }
}

void xoaCuoi(nodePtr &h) {
    nodePtr t = h;
    if (h == NULL) return;
    else {
        while (t -> link -> link != NULL) {
            t = t -> link;
        }
        delete t -> link;
        t -> link = NULL;
    }
}

void xoaX(nodePtr &h, TYPEINFO x) {
    nodePtr t = h;
    nodePtr before = NULL;
    if (h == NULL) return;
    if (h -> data == x) xoaDau(h);
    else {
        while (t != NULL && t -> data != x) {
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
    for (; t -> link != NULL; t = t -> link) {
        if (t -> data % 2 == 0) themDau(hChan, t -> data);
        else themDau(hLe, t -> data);
    }
}

void hopNhat(nodePtr &hChan, nodePtr &hLe, nodePtr &hMerge) {
    hMerge = hChan;
    nodePtr t = hMerge;
    while (t -> link != NULL) {
        t = t -> link;
    }
    t -> link = hLe;
}

void sapXep(nodePtr &h) {
    if (h == NULL) return;
    for (nodePtr i = h; i != NULL; i = i -> link) {
        for (nodePtr j = h; j != NULL; j = j -> link) {
            if (i -> data < j -> data) {
                int temp = i -> data;
                i -> data = j -> data;
                j -> data = temp;
            }
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