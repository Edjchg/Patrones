//
// Created by tony on 23/03/18.
//

#ifndef PATRONES_RAMLIFEVIEW_H
#define PATRONES_RAMLIFEVIEW_H

#include "Observer.h"
#include <list>

class RamLifeView {

public:

    list<Observer> ListaObservables;

    void añadirRam(Observer ram);

    void eliminarRam(Observer ram);

    bool notificarObserver();

};


#endif //PATRONES_RAMLIFEVIEW_H
