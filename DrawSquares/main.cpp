#include <iostream>
#include <cmath>


struct Position {
    double x;
    double y;

    Position(double x, double y) : x(x), y(y) {
    }
};

int main() {
    Position p1(2, 3);
    Position p2(5, 7);

//line and its properties
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;

//lenght of line  = max rozdiel bodov (ich absolutnych hodnot)
    double d = std::fmaxf(std::abs(dx), std::abs(dx));

    dx /= d;
    dy /= d;

// board for painting
    constexpr int numberOfRow = 30;
    constexpr int numberOfColumn = 30;

    char board[numberOfRow][numberOfColumn];

    for (size_t i = 0; i < numberOfRow; i++) {
        for (size_t j = 0; j < numberOfColumn; j++) {
            board[i][j] = '.';
        }
    }

//nastavenie vychodzych bodov
    double x = p1.x;
    double y = p1.y;

    for (int i = 0; i <= d; i++) {
        int ix = (int) std::round(x);
        int iy = (int) std::round(y);

        //
        board[iy][ix] = 'x';

        x+= dx;
        y+= dy;
    }

    for(size_t i = 0; i <numberOfRow; i++)
    {
        for(size_t j = 0; i <numberOfColumn; j++)
        {
            char ch = board[numberOfRow -1-i][j];
            putchar(ch);
        }
        putchar('\n');

    }
return  0;
}