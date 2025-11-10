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
    friend class FriendProcessor;
};
#endif
