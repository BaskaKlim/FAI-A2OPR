#include <iostream>

class Stvorec {
public:
    //definovanie premenej triedy
    double stranaA;

    //definovanie funkcie obsahu pre objekt {triedu} Stvorec
    double Obsah() {
        return stranaA * stranaA;
    }
    double Obvod() {
        return stranaA * 4;
    }

    //funckia s parametrom pre zmenu vnutornych premennych triedy
    double zmenDelkuStrany(double novaHodnota){
        return stranaA = novaHodnota;
    }

};

int main() {

    Stvorec stvorec;
    stvorec.stranaA = 10.5;
    stvorec.Obsah();
    stvorec.zmenDelkuStrany(3.0);
    stvorec.Obvod();

    printf("Ctverec ma delku strany %lf", stvorec.stranaA);
    printf("\nCtverec ma obsah %lf a obvod %lf" , stvorec.Obsah(),stvorec.Obvod() );

}
