//
// Created by Edgar Chaves on 22/3/18.
//

#ifndef PATRONES_QTFACTORY_H
#define PATRONES_QTFACTORY_H


#include "AbstractFactory.h"
/*
 * Fabrica concreta de QT
 */


class QTFactory: public AbstractFactory {
public:
    WindowAbstract*getHerramientas(){
        return new QTToolBox();
    }

    WindowAbstract*getTipo(){
        return new QTLayers();
    }
};




#endif //PATRONES_QTFACTORY_H
