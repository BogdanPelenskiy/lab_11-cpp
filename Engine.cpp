#include "Engine.h"

Engine::Engine() : model("Невідомо"), voltage(0), power(0) {}

Engine::Engine(string m, double v, double p) : model(m), voltage(v), power(p) {}

Engine::~Engine() {}

void Engine::input() {
    cout << "Введіть модель двигуна: ";
    getline(cin, model);

    cout << "Введіть напругу (В): ";
    while (!(cin >> voltage) || voltage <= 0) {
        cout << "Помилка! Напруга має бути додатною. Введіть ще раз: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << "Введіть потужність (Вт): ";
    while (!(cin >> power) || power <= 0) {
        cout << "Помилка! Потужність має бути додатною. Введіть ще раз: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }
    cin.ignore();
}

void Engine::display() const {
    cout << "Модель: " << model << ", Напруга: " << voltage << " В, Потужність: " << power << " Вт";
}
