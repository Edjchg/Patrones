//
// Created by tony on 23/03/18.
//

#include "RamLifeView.h"


bool RamLifeView::notificarObserver() {
    Observer *observer = new Observer();
    observer->actualizarObserver(ListaObservables);
}

void RamLifeView::añadirRam(Observer ram) {
    ListaObservables.push_back(ram);
    notificarObserver();
}

void RamLifeView::eliminarRam(Observer ram) {
    ListaObservables.remove(ram);
    notificarObserver();
}