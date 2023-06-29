#include "thuvien.h"
int main() {
    nodePtr h = NULL;
    nodePtr hChan = NULL;
    nodePtr hLe = NULL;

    themDau(h, 10);
    themDau(h, 20);
    themDau(h, 30);
    themCuoi(h, 40);
    themCuoi(h, 50);
    chenSauH(h, 100);
    themChanLe(h, hChan, hLe);

    print(h);
    print(hChan);
    print(hLe);
    return 0;
}
