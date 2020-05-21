#include <stdio.h>

int main() {
    //alokujeme si paměť na haldě pro jedno celé číslo typu integer pomocí zápisu new int a uložíme si adresu na alokovanou paměť do proměnné typu ukazatele int* p
    int *p = new int;
    //s pomocí operátoru indirekce *p změníme hodnotu uloženou na adrese ukazatele p
    *p = 5;
    // a nakonec paměť uvolníme pomocí zápisu delete p
    delete p;
}

