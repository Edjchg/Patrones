//
// Created by Edgar Chaves on 22/3/18.
//

#ifndef PATRONES_WINDOWABSTRACT_H
#define PATRONES_WINDOWABSTRACT_H

#include <iostream>
#include <string>
using namespace std;

class WindowAbstract {

protected:
    int ancho;
    int largo;
    string herramientas;
    string tipo;

    WindowAbstract(string herramientasUsadas, string tipoVentana):herramientas(herramientasUsadas), tipo(tipoVentana){

    }
public:
    string getHerramientas();
    string getTipo();


};

class GTKToolBox: public WindowAbstract{
public:
    GTKToolBox():WindowAbstract("GTK", "ToolBox"){}
};

class GTKLayers : public WindowAbstract{
public:
    GTKLayers():WindowAbstract("GTK","Layers"){}
};

class QTToolBox: public WindowAbstract{
public:
    QTToolBox():WindowAbstract("QT", "ToolBox"){}
};

class QTLayers: public WindowAbstract{
public:
    QTLayers():WindowAbstract("QT", "Layers"){}
};



#endif //PATRONES_WINDOWABSTRACT_H
