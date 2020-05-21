#include <iostream>


//TODO: Nejprve si definujeme třídu Pole která si v konstruktoru alokuje paměť.

int main() {
    
    //adresny operator alebo aj tzv operator referencie
    int x = 2;
    int* p = &x;

    //Pokud pracujeme přímo s ukazatelem, tak pracujeme s jeho hodnotou což je adresa.
    int z = 2;
    int* p1 = &z;
    int* p2 = p1;
    //Pokud chceme pracovat s hodnotou uloženou na adrese na kterou ukazatel ukazuje, tak musíme použít operátor indirekce = operátor dereference
    *p2 = 0;
    *p2 = *p2 + 1;
    *p2 += 1;
    ++*p2;
    (*p2)++;

    printf("%p,%p,%p ", p,p1,p2);
}