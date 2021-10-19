//
// Created by Diana on 23.09.2021.
//

#ifndef HOMEWORK1_SOKOLOVA_TRANSPORT_H
#define HOMEWORK1_SOKOLOVA_TRANSPORT_H
//------------------------------------------------------------------------------
// transport.h - содержит описание обобщающего транспортного средства,
//------------------------------------------------------------------------------
#include "rnd.h"
#include <fstream>
using  namespace  std;

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся транспортные средства
class Transport {
protected:
    Random rnd = Random();
    int speed;
    double distance;
public:
    virtual ~Transport() {};


    // Ввод обобщенной фигуры
    static Transport *StaticIn(ifstream &ifdt);

    // Случайный ввод обобщенной фигуры
    static Transport *StaticInRnd();

    // Ввод обобщенной фигуры
    virtual void In(ifstream &ifdt)=0;

    // Случайный ввод обобщенной фигуры
    virtual  void InRnd()=0;

    // Вывод обобщенной фигуры
    virtual void Out(ofstream &ofst)=0;

    virtual void OutGenTest(ofstream &ofst)=0;

    // Вычисление оптимального времени обобщенного транспорта
    virtual double IdealTime()=0;
};


#endif  // HOMEWORK1_SOKOLOVA_TRANSPORT_H
