#ifndef SERVOMOTOR_H
#define SERVOMOTOR_H
#include "Engine.h"

class ServoMotor : public Engine {
private:
    double angle;
public:
    ServoMotor();
    ServoMotor(string m, double v, double p, double a);
    ~ServoMotor();
    void input() override;
    void display() const override;

    double calculateEfficiency() const override {
        return (voltage * angle) / power;
    }
};

#endif
