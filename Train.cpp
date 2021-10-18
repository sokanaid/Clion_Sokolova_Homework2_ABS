//
// Created by Diana on 23.09.2021.
//
#include "Train.h"


// Расчет идеального времени прохождения для поезда
double Train::IdealTime() {
    return (double) distance / speed;
}

// Вывод параметров поезда в поток
void Train::Out( ofstream &ofst) {
    ofst << "It is a train: number of railway carriage = "
         << numberOfRailwayCarriage << ", speed = " << speed
         << ", distance = " << distance
         << ". Ideal time = " << IdealTime() << "\n";
}

void Train::OutGenTest( ofstream &ofst) {
    ofst << 1 << ' ' << numberOfRailwayCarriage << ' ' << speed << ' ' << distance << ' ' << '\n';
}

// Ввод параметров поезда из потока
void Train::In( ifstream &ifst) {
    ifst >> numberOfRailwayCarriage >> speed >> distance;
}

// Случайный ввод параметров поезда
void Train::InRnd() {
    numberOfRailwayCarriage = rnd.RandomN();
    speed = rnd.RandomSpeed();
    distance = rnd.RandomDistance();
}
