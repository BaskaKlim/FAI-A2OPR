#include <iostream>

class Obdelnik {
public:
    double m;
    double n;

//inicializacia variables
    Obdelnik() : m(0.0), n(0.0) {

    }
};

// constructor member inicializer list , Tento zápis musíme ho použít pokud třída nemá výchozí konstruktor bez parametrů.
class Souradnice {
public:
    double x;
    double y;

    Souradnice(double x, double y) : x(x), y(y) {

    }
};


int main() {
    Obdelnik o1;

}
