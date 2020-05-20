
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
    double ZmenDelkuStrany(double novaHodnota){
        return stranaA = novaHodnota;
    }

};
