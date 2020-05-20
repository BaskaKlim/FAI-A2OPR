#include <iostream>

// constructor member inicializer list , Tento zápis musíme ho použít pokud třída nemá výchozí konstruktor bez parametrů.
class Souradnice {
public:
    double x;
    double y;

    Souradnice(double x, double y) : x(x), y(y) {

    }
};
class Obdelnik {
public:

    const int id;
    double m;
    double n;
    Souradnice stred;

//inicializacia variables
    Obdelnik(int id, double m, double n, double x, double y) : id(id), m(m), n(n), stred(x, y)
    {

    }
};




int main() {
    Obdelnik o1(1, 2.0, 3.0, 100, 200);
    printf("id %d: %lf x %lf, x: %lf, y: %lf", o1.id, o1.m, o1.n, o1.stred.x, o1.stred.y);

    return 1;

}
