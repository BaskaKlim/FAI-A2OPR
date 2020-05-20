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
