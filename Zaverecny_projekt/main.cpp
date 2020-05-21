
#include <iostream>
#include <string>

using namespace std;

//TODO: Vložíte a vykreslíte libovolný počet čtverců zadaných středem a délkou strany.

/** Classes of "objcets" that we will use, with class variables and constructoers */
class Position {
public:
    double x;
    double y;

    Position(double x, double y) : x(x), y(y) {
    }
};

class Square {
public:
    double sideA;
    Position position;

    Square(double sideA, double x, double y) : sideA(sideA), position(x, y) {

    }

};

/** method that drows a square, with parameters such as number of squares, square Object, and type of characters using during drawing */
void DrawSquares(int numberOfSquares, Square stvorec, char drawChar, char emptyChar) {

    // define each type of our lines
    string fullLine(stvorec.sideA, drawChar);
    string positionYString(stvorec.position.y, emptyChar);
    string nonFullLine(stvorec.sideA, emptyChar);

    for (int pocetStvorcov = 0; pocetStvorcov < numberOfSquares; pocetStvorcov++) {

        //set up position X by adding empty characters
        for (int row = 0; row < stvorec.position.x; row++) {
            cout << endl;
        }

        // first line of square, but set up Y position first
        cout << positionYString;
        cout << fullLine << endl;

        // setup sides of square
        // kvoli riadkovaniu som  pocet lines na osi y vydelila 2 aby to bol vizualne stvorec
        for (int row = 1; row < (stvorec.sideA / 2 - 1); row++) {
            nonFullLine[0] = drawChar;
            nonFullLine[stvorec.sideA - 1] = drawChar;
            //set up position Y by adding empty lines
            cout << positionYString;
            cout << nonFullLine << endl;
        }
        //last line of square, but set up Y position first
        cout << positionYString;
        cout << fullLine << endl;
    }
}

int main() {
    //instance and declaration of Square object with our parameters
    Square s1(8, 10, 10);
    //method for drawing several squares
    DrawSquares(4, s1, '.', ' ');

}