#include "ServoMotor.h"
#include <iostream>
using namespace std;

ServoMotor::ServoMotor() : Engine(), angle(0) {}

ServoMotor::ServoMotor(string m, double v, double p, double a) : Engine(m, v, p), angle(a) {}

ServoMotor::~ServoMotor() {}

void ServoMotor::input() {
    Engine::input();
    cout << "Введіть кут повороту (0–180 градусів): ";
    while (!(cin >> angle) || angle < 0 || angle > 180) {
        cout << "Помилка! Кут має бути в межах 0–180°. Введіть ще раз: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cin.ignore();
}

void ServoMotor::display() const {
    Engine::display();
    cout << ", Кут: " << angle << "°";
}
