#include <iostream>
#include <stdio.h>

class Square {
public:
    double a;

    //pretazenie konstruktorov, oba s rovnakym nazvom ale s inym poctom parametrov
    Square() {
        a = 0.0;
    }

    Square(double a) {
        this->a = a;
    }
};

int main() {
    Square c1;        // a bude mit hodnotu 0.0
    Square c2(3.0);    // n bude mit hodnotu 3.0
    printf("Ctverec ma polomer %lf\n", c1.a);
    printf("Ctverec ma polomer %lf\n", c2.a);

    return 1;

}
