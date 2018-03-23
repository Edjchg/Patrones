//
// Created by Edgar Chaves on 22/3/18.
//

#ifndef PATRONES_GTKFACTORY_H
#define PATRONES_GTKFACTORY_H

#include "AbstractFactory.h"

class GTKFactory:public AbstractFactory {

public:
    WindowAbstract*getHerramientas(){
        return new GTKToolBox;
    }

    WindowAbstract*getTipo(){
        return new GTKLayers;
    }

};


#endif //PATRONES_GTKFACTORY_H
