#ifndef HOMEWORK1_SOKOLOVA_RND_H
#define HOMEWORK1_SOKOLOVA_RND_H
#include <cstdlib>
#include <ctime>
//------------------------------------------------------------------------------
// rnd.h - содержит генераторы случайных чисел для разных величин
//------------------------------------------------------------------------------
class Random {
public:
    Random(){
        srand(static_cast<unsigned int>(time(0)));
    }
    inline auto RandomN() {
        return rand() % 20 + 1;
    }

    inline auto RandomDisplacement() {
        return rand() % 50000 + 10;
    }

    inline auto RandomSpeed() {
        return rand() % 500 + 1;
    }

    inline auto RandomDistance() {
        return rand() % 10000 + 1 + (double) rand() / RAND_MAX;
    }

    inline auto RandomShipType() {
        return rand() % 3 + 1;
    }
};
#endif