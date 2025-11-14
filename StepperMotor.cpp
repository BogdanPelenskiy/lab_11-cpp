#include "StepperMotor.h"
#include <iostream>
using namespace std;

StepperMotor::StepperMotor() : Engine(), steps(0) {}

StepperMotor::StepperMotor(string m, double v, double p, int s)
    : Engine(m, v, p), steps(s) {}

void StepperMotor::input() {
    Engine::input();

    cout << "Введіть кількість кроків (>0): ";
    while (!(cin >> steps) || steps <= 0) {
        cout << "Помилка! Кроки повинні бути додатними. Введіть ще раз: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cin.ignore();
}

void StepperMotor::display() const {
    Engine::display();
    cout << ", Кроків: " << steps;
}
