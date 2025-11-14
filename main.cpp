#include <iostream>
#include <vector>
#include "Engine.h"
#include "ServoMotor.h"
#include "StepperMotor.h"
#include "FriendProcessor.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA.UTF-8");

    vector<ServoMotor> servoMotors;
    vector<StepperMotor> stepperMotors;

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

        int type;
        cout << "Оберіть тип двигуна:\n1 - Серводвигун\n2 - Кроковий двигун\nВаш вибір: ";
        
        while (!(cin >> type) || (type != 1 && type != 2)) {
            cout << "Помилка! Введіть 1 або 2: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        cin.ignore();

        if (type == 1) {
            ServoMotor sm;
            sm.input();
            servoMotors.push_back(sm);
        } 
        else {
            StepperMotor st;
            st.input();
            stepperMotors.push_back(st);
        }
    }

    FriendProcessor fp;

    cout << "\n===== Серводвигуни =====\n";
    fp.displayMotors(servoMotors);

    cout << "\n===== Крокові двигуни =====\n";
    fp.displayMotors(stepperMotors);

    cout << "\n===== Ефективність серводвигунів =====\n";
    fp.calculatePerformance(servoMotors);

    cout << "\n===== Ефективність крокових двигунів =====\n";
    fp.calculatePerformance(stepperMotors);

    return 0;
}
