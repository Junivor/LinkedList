#include "thuvien.h"
int main() {
    nodePtr h = NULL;
    nodePtr hChan = NULL;
    nodePtr hLe = NULL;
    nodePtr hMerge = NULL;

    themDau(h, 10);
    themDau(h, 23);
    themDau(h, 32);
    themCuoi(h, 41);
    themCuoi(h, 55);
    chenSauH(h, 101);
    print(h);

    themChanLe(h, hChan, hLe);
    print(hChan);
    print(hLe);

    hopNhat(hChan, hLe, hMerge);
    print(hMerge);

    sapXep(h);
    print(h);
    return 0;
}
