#include <stdio.h>

// tvorim triedu s public pristupnymi variables
class Bod {
public:
    int x;
    int y;
};

int main() {
    //definujeme Proměnnou typu třída
    Bod b1;
    //pristupujem k členským proměnným pomocí operátoru přímého přístupu .
    b1.x = 2;
    b1.y = 3;

    printf("Bod b1 ma souradnice x: %d y: %d", b1.x, b1.y);

    Bod b2 = b1;
    printf("\nBod b2 ma souradnice x: %d y: %d", b2.x, b2.y);
}