//
// Created by Edgar Chaves on 22/3/18.
//

#ifndef PATRONES_ABSTRACTFACTORY_H
#define PATRONES_ABSTRACTFACTORY_H

#include "WindowAbstract.h"
class AbstractFactory {

        public:
        virtual WindowAbstract* getHerramientas() = 0;
        virtual WindowAbstract* getTipo() = 0;



};


#endif //PATRONES_ABSTRACTFACTORY_H
