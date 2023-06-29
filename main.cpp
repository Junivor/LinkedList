#include "thuvien.h"
int main() {
    nodePtr h = NULL;
    nodePtr hChan = NULL;
    nodePtr hLe = NULL;

    themDau(h, 10);
    themDau(h, 23);
    themDau(h, 32);
    themCuoi(h, 41);
    themCuoi(h, 55);
    chenSauH(h, 101);
    themChanLe(h, hChan, hLe);

    print(h);
    print(hChan);
    print(hLe);
    return 0;
}
