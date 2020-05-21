#include <iostream>

int main() {
    //TODO: operatory new a delete na type integer
    //alokujeme si paměť na haldě pro jedno celé číslo typu integer pomocí zápisu new int a uložíme si adresu na alokovanou paměť do proměnné typu ukazatele int* p
    int *p = new int;
    //s pomocí operátoru indirekce *p změníme hodnotu uloženou na adrese ukazatele p
    *p = 5;
    // a nakonec paměť uvolníme pomocí zápisu delete p
    delete p;


    //TODO: operatory new a delete na array o velkosti n

    //velkost (pola)
    int n = 10;
    //alokovanie pamate pre pole o velkosti n a ulozenie na adresu cez pointer
    int *r = new int[n];

    //K prvkům pola přistupujeme pomocí operátoru indexace p[i] (ale mohli bychom použít i operátor indirekce, například zápis *(p + i)).
    for (int i = 0; i < n; i++) {
        r[i] = i;
        printf("%d", r[i]);
    }

    delete[] p;

    return 1;
}