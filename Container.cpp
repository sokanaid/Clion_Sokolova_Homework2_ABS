//------------------------------------------------------------------------------
// container_Constr.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------
#include "Container.h"

// Деструктор контейнера
Container::~Container() {
    Clear();
}

//------------------------------------------------------------------------------
// Инициализация контейнера
Container::Container() : len(0) {}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Container::Clear() {
    for (int i = 0; i < len; i++) {
        delete cont[i];
    }
    len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void Container::In(ifstream &ifst) {
    while (!ifst.eof()) {
        if ((cont[len] = Transport::StaticIn(ifst)) != 0) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void Container::InRnd(int size) {
    while (len < size) {
        if ((cont[len] = Transport::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements." << endl;
    for (int i = 0; i < len; i++) {
        ofst << i << ": ";
        cont[i]->Out(ofst);
    }
}

// Вывод содержимого контейнера в указанный поток
void Container::OutGenTest(ofstream &ofst) {
    for (int i = 0; i < len; i++) {
        ofst << i << ": ";
        cont[i]->OutGenTest(ofst);
    }
}

//------------------------------------------------------------------------------
// Сортировка Шелла
string Container::ShellSort() {
    int first = 0, last = len;
    for (auto d = (last - first) / 2; d != 0; d /= 2)
        for (auto i = first + d; i != last; ++i)
            for (auto j = i; j - first >= d && cont[j]->IdealTime() < cont[(j - d)]->IdealTime(); j -= d) {
                auto tmp = cont[j];
                cont[j] = cont[(j - d)];
                cont[(j - d)] = tmp;
            }
    return "Container was sorted.";
}