//
// Created by Edgar Chaves on 22/3/18.
//

#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton::Singleton() {
    memoria = 0;
}

Singleton& Singleton::Instancia() {
    static Singleton instancia;
    return instancia;

}

int Singleton::TomarMemoria(int espacio) {


}

bool Singleton::MemoriaLLena(int referencia) {

    if (referencia != 0){
        return true;
    }else{
        int cantidadMemoria;
        TomarMemoria(cantidadMemoria);
        return true;
    }
}
