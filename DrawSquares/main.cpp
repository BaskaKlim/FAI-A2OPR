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

}