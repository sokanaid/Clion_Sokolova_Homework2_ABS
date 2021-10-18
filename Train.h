
#ifndef HOMEWORK1_SOKOLOVA_TRAIN_H

#define HOMEWORK1_SOKOLOVA_TRAIN_H
#include <fstream>
# include "rnd.h"
#include "Transport.h"
using namespace std;



class Train : public Transport {
private:
    int numberOfRailwayCarriage;
public:
    virtual ~Train() {}
    // Ввод параметров прямоугольника из файла
    virtual void In(ifstream &ifst);

    // Случайный ввод параметров прямоугольника
    virtual void InRnd();

    // Вывод параметров прямоугольника в форматируемый поток
    virtual void Out(ofstream &ofst);

    virtual void OutGenTest( ofstream &ofst);

    // Вычисление периметра прямоугольника
    virtual double IdealTime();
};

#endif  // HOMEWORK1_SOKOLOVA_TRAIN_H
