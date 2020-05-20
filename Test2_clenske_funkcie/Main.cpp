//
// Created by Barbara Klimeková on 20/05/2020.
//
#include <stdio.h>
#include "Stvorec.cpp"
#include "Obdlznik.cpp"



int  main() {
    Obldznik obldznik;
    obldznik.stranaA = 4.0;
    obldznik.stranaB = 2.5;
    double obvod = obldznik.Obvod();
    double obsah = obldznik.Obsah();
    obldznik.ZmenRozmery(3.0, 9.0);
    printf("\nObdznik ma obsah %lf a obvod %lf", obsah, obvod);


    Stvorec stvorec;
    stvorec.stranaA = 10.5;
    stvorec.Obsah();
    stvorec.ZmenDelkuStrany(3.0);
    stvorec.Obvod();

    printf("\nCtverec ma delku strany %lf", stvorec.stranaA);
    printf("\nCtverec ma obsah %lf a obvod %lf", stvorec.Obsah(), stvorec.Obvod());


}


