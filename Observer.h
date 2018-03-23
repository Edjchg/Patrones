//
// Created by tony on 22/03/18.
//

#ifndef PATRONES_OBSERVER_H
#define PATRONES_OBSERVER_H

#include <list>
#include <vector>

using namespace std;

/*
 * Este patrón de diseño se establecerá para la RAM live view para que así se
 * este observando los cambios en la memoria por ejemplo, si se añaden mas espacios
 * de memoria, si se eliminan o si se cambian, y asi se este actualizando
 */

class Observer {


public:

    list actualizarObserver(list);
};


#endif //PATRONES_OBSERVER_H
