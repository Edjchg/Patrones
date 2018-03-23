#include <iostream>
#include "Singleton.h"
using namespace std;

int main() {
    Singleton& memoria = Singleton::Instancia();
    int espacio;
    int *ptrMemoria;
    espacio= 4;
    ptrMemoria= &espacio;

    cout<<*ptrMemoria<<endl;
    cout<<ptrMemoria<<endl;

    cout<<memoria.MemoriaLLena(*ptrMemoria);


    return 0;
}