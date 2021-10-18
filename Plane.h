//
// Created by Diana on 23.09.2021.
//
#ifndef HOMEWORK1_SOKOLOVA_PLANE_H

#define HOMEWORK1_SOKOLOVA_PLANE_H
#include <fstream>
# include "rnd.h"
#include "Transport.h"

using namespace std;

class Plane : public Transport {
private:
    int flightRange, liftingCapacity;
public:
    virtual ~Plane() {}
    // Ввод параметров прямоугольника из файла
    virtual void In( ifstream &ifst);

    // Случайный ввод параметров прямоугольника
    virtual void InRnd();

    // Вывод параметров прямоугольника в форматируемый поток
    virtual void Out(ofstream &ofst);

    virtual void OutGenTest( ofstream &ofst);

    // Вычисление периметра прямоугольника
    virtual double IdealTime();
};
#endif
