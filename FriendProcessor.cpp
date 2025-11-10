#include "FriendProcessor.h"
#include <iostream>
using namespace std;

FriendProcessor::FriendProcessor() {}
FriendProcessor::~FriendProcessor() {}

void FriendProcessor::displayMotors(const vector<ServoMotor>& motors) {
    cout << "\n===== Введені дані двигунів =====\n";
    for (size_t i = 0; i < motors.size(); ++i) {
        cout << i + 1 << ". ";
        motors[i].display();
        cout << endl;
    }
}

void FriendProcessor::calculateEfficiency(const vector<ServoMotor>& motors) {
    cout << "\n===== Розрахунок ККД =====\n";
    for (size_t i = 0; i < motors.size(); ++i) {
        const ServoMotor& m = motors[i];
        double efficiency = 0;
        if (m.power > 0)
            efficiency = (m.voltage * m.angle) / m.power;
        cout << "Двигун " << m.model << ": ККД = " << efficiency << endl;
    }
}
