#include <iostream>


//TODO: Nejprve si definujeme třídu Pole která si v konstruktoru alokuje paměť.

class Array {
public:
    int size;
    int *data;

    //kostruktor
    Array(int size) : size(size) {
        data = new int[size];
    }

    // desktuktor
    ~Array() {
        delete[] data;
    }
};

int main() {

}