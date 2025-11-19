#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include <iostream>
using namespace std;

class Engine {
protected:
    string model;
    double voltage;
    double power;

public:
    Engine();
    Engine(string m, double v, double p);
    virtual ~Engine();

    virtual void input();
    virtual void display() const;

    // 🔥 ОБОВʼЯЗКОВО для поліморфізму
    virtual double calculateEfficiency() const = 0;

    string getModel() const { return model; }
    double getVoltage() const { return voltage; }
    double getPower() const { return power; }
};

#endif
