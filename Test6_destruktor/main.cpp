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

    // desktuktor, ktory se potom v následujícím příkaldu zavolá, až přestane existovat proměnná array, což je na konci funkce main
    ~Array() {
        delete[] data;
    }
};

int main() {
    //deklaracia a inicializacia pola s velkostou 3 
    Array array(3);

}