#include <iostream>
#include "Engine.h"
#include "ServoMotor.h"
#include "FriendProcessor.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");
    vector<ServoMotor> motors;
    int n;

    cout << "Введіть кількість двигунів: ";
    while (!(cin >> n) || n <= 0) {
        cout << "Некоректне значення! Спробуйте ще раз: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cin.ignore();

    for (int i = 0; i < n; ++i) {
        cout << "\n--- Двигун №" << i + 1 << " ---\n";
        ServoMotor m;
        m.input();
        motors.push_back(m);
    }

    FriendProcessor fp;
    fp.displayMotors(motors);
    fp.calculateEfficiency(motors);

    return 0;
}
