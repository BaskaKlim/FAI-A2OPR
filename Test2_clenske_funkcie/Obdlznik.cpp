//
// Created by Barbara Klimeková on 20/05/2020.
//
#include <iostream>
#include <stdio.h>

class Obldznik {
public:
    double stranaA;
    double stranaB;

    double Obvod() {
        return 2 * (stranaA + stranaB);
    }

    double Obsah() {
        return stranaA * stranaB;
    }

    double ZmenRozmery(double stanaA, double stranaB) {
        this->stranaA = stranaA;
        this->stranaB = stranaB;
    }
};

int main() {
    Obldznik obldznik;
    obldznik.stranaA = 4.0;
    obldznik.stranaB = 2.5;
    double obvod = obldznik.Obvod();
    double obsah = obldznik.Obsah();
    obldznik.ZmenRozmery(3.0, 9.0);
    printf("\nObdznik ma obsah %lf a obvod %lf", obsah, obvod);


}


