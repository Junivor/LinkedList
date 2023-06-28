#include "thuvien.h"
int main() {
    nodePtr h;
    nodePtr hChan;
    nodePtr hLe;

    themDau(h, 10);
    themDau(h, 20);
    themDau(h, 30);
    themCuoi(h, 40);
    themCuoi(h, 50);
    chenSauH(h, 100);

    print(h);
    return 0;
}
