
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

void DrawSquare(int side, char drawChar, char emptyChar) {
    string fullLine(side, drawChar);
    cout << fullLine << endl;
    for (int row = 1; row < (side - 1); row++) {
        string nonFullLine(side, emptyChar);
        nonFullLine[0] = drawChar;
        nonFullLine[side - 1] = drawChar;
        cout << nonFullLine << endl;
    }
    cout << fullLine << endl;
}

int main() {
    Stvorec s1(4, 200, 200);
    DrawSquare(s1.stranaA, '.', ' ');

}