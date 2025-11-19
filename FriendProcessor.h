#ifndef FRIENDPROCESSOR_H
#define FRIENDPROCESSOR_H

#include <vector>
#include "Engine.h"     // базовий клас двигуна

using namespace std;

class FriendProcessor {
public:
    FriendProcessor();
    ~FriendProcessor();

    // тепер приймає вектор вказівників на базовий клас Engine
    void displayMotors(const vector<Engine*>& motors);
    void calculatePerformance(const vector<Engine*>& motors);
};

#endif
