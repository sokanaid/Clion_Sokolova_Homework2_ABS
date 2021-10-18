//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "Train.h"
#include "Plane.h"
#include "Ship.h"
#include "Transport.h"
//------------------------------------------------------------------------------
// Ввод параметров обобщенного транспорта из файла
Transport *Transport::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    Transport *sp = nullptr;
    switch (k) {
        // train
        case 1:
            sp = new Train;
            break;
        case 2:
            sp = new Ship;
            break;
        case 3:
            sp = new Plane;
            break;
    }
    sp->In(ifst);
    return sp;
}

// Случайный ввод обобщенного транспорта
Transport *Transport::StaticInRnd() {
    auto k = rand() % 3 + 1;
    Transport *sp = nullptr;
    switch (k) {
        // train
        case 1:
            sp = new Train;
            break;
        case 2:
            sp = new Ship;
            break;
        case 3:
            sp = new Plane;
            break;
    }
    sp->InRnd();
    return sp;
}
