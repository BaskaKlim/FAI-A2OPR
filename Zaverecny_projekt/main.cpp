
#include <iostream>
#include <string>

using namespace std;

//TODO: Vložíte a vykreslíte libovolný počet čtverců zadaných středem a délkou strany.


class Suradnice {
public:
    double x;
    double y;

    Suradnice(double x, double y) : x(x), y(y) {

    }
};

class Stvorec {
public:
    double stranaA;
    Suradnice suradniceStredu;

    Stvorec(double stranaA, double x, double y) : stranaA(stranaA), suradniceStredu(x, y) {

    }

};

int main() {
    Stvorec s1(4, 200, 200);

    string line(s1.stranaA, '*');
    string sideline(s1.stranaA, ' ');
    sideline[0] = '*';
    sideline[s1.stranaA-1] = '*';

    cout << line << endl;
    for (int i = 0; i < s1.stranaA - 2; i++) {
        cout << sideline << endl;
    }
    cout << line << endl;
}