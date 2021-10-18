//
// Created by Diana on 23.09.2021.
//

#include "Plane.h"

double Plane::IdealTime() {
    return ((double) distance) / speed;
}

// Вывод параметров самолета в поток
void Plane::Out(ofstream &ofst) {
    ofst << "It is a plane: flight range = "
         << flightRange << ", lifting capacity = " << liftingCapacity << ", speed = " << speed
         << ", distance = " << distance
         << ". Ideal time = " << IdealTime() << "\n";
}

void Plane::OutGenTest(ofstream &ofst) {
    ofst << 3 << ' '
         << flightRange << ' ' << liftingCapacity << ' ' << speed << ' '
         << distance << '\n';
}

// Ввод параметров самолета из потока
void Plane::In(ifstream &ifst) {
    ifst >> flightRange >> liftingCapacity >> speed >> distance;

}

// Случайный ввод параметров самолета
void Plane::InRnd() {
    liftingCapacity = rnd.RandomDisplacement();
    flightRange = rnd.RandomDisplacement();
    speed = rnd.RandomSpeed();
    distance = rnd.RandomDistance();
}