#pragma once
#include "Engine.h"


class StepperMotor : public Engine {
private:
    int steps;
public:
    StepperMotor();
    StepperMotor(string m, double v, double p, int s);

    void input() override;
    void display() const override;

    double calculateEfficiency() const override {
        return (voltage * steps) / power;
    }
};

