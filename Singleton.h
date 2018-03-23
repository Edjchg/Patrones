//
// Created by Edgar Chaves on 22/3/18.
//

#ifndef PATRONES_SINGLETON_H
#define PATRONES_SINGLETON_H
#include <array>

/*
 * Este patrón de diseño se establecerá para la petición de memoria, el cual es un recurso costoso y solo se debería pedir
 * una vez al servidor.
 */
class Singleton {
public:
    static Singleton& Instancia();

    Singleton(const Singleton&) = delete;

    Singleton& operator = (const Singleton&)= delete;

    int TomarMemoria(int espacio);

    bool MemoriaLLena(int referencia);



private:
    Singleton ();
    int memoria;


};


#endif //PATRONES_SINGLETON_H
