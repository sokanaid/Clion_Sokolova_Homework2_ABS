//
// Created by Diana on 23.09.2021.
//

#include "Ship.h"

// Расчет идельного времени прохождения для корабля
double Ship::IdealTime() {
    return (double) distance / speed;
}

// Вывод параметров корабля в поток
void Ship::Out(ofstream &ofst) {
    ofst << "It is a ship: displacement = "
         << displacement << ", type = " << type << ", speed = " << speed
         << ", distance = " << distance
         << ". Ideal time = " << IdealTime() << "\n";
}
// Генерация теста.
void Ship::OutGenTest( ofstream &ofst) {
    ofst << 2<< ' '
         << displacement<< ' ' << type <<' '<< speed<< ' '
         << distance<<'\n';
}

// Ввод параметров корабля из потока
void Ship::In( ifstream &ifst) {
    int types;
    ifst >> displacement >> types >> speed >> distance;
    type = (shipType)types;
}

// Случайный ввод параметров корабля
void Ship::InRnd() {
    //Random rnd = Random();
    displacement =rnd.RandomDisplacement();
    type = (shipType)rnd.RandomShipType();
    speed = rnd.RandomSpeed();
    distance = rnd.RandomDistance();
}