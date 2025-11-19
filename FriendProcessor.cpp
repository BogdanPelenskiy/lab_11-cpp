#include "FriendProcessor.h"
#include <iostream>
using namespace std;

FriendProcessor::FriendProcessor() {}
FriendProcessor::~FriendProcessor() {}

void FriendProcessor::displayMotors(const vector<Engine*>& motors) {
    cout << "\n===== Введені дані двигунів =====\n";
    for (size_t i = 0; i < motors.size(); ++i) {
        cout << i + 1 << ". ";
        motors[i]->display();
        cout << endl;
    }
}

void FriendProcessor::calculatePerformance(const vector<Engine*>& motors) {
    cout << "\n===== Розрахунок ефективності =====\n";

    for (size_t i = 0; i < motors.size(); ++i) {
        Engine* m = motors[i];

        cout << "Двигун " 
             << m->getModel()
             << ": Ефективність = "
             << m->calculateEfficiency()
             << endl;
    }
}
