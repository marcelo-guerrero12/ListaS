#include "List.h"
#include <iostream>

using namespace std;


int main(){
    Lista<int> lista;
    lista.anteponer(5);
    lista.anteponer(4);
    lista.anteponer(3);
    lista.anteponer(2);
    lista.anteponer(1);
    lista.insertarPos(10,3);
    lista.imprimir();
    return 0;
}
