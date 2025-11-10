#ifndef FRIENDPROCESSOR_H
#define FRIENDPROCESSOR_H
#include <vector>
#include "ServoMotor.h"
using namespace std;

class FriendProcessor {
public:
    FriendProcessor();
    ~FriendProcessor();
    void displayMotors(const vector<ServoMotor>& motors);
    void calculateEfficiency(const vector<ServoMotor>& motors);
};
#endif
