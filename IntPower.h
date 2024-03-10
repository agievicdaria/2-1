#pragma once
#include <iostream>
using namespace std;

class IntPower
{
    double first;
    int second;

public:
    IntPower();
    IntPower(double, int);
    IntPower(const IntPower&);

    double power() const;
    string ToString() const;

    IntPower& operator++();
    IntPower& operator--();
    IntPower operator++(int);
    IntPower operator--(int);

    friend istream& operator>>(istream&, IntPower&);
    friend ostream& operator<<(ostream&, const IntPower&);

    double getFirst() const { return first; }
    int getSecond() const { return second; }
    void setFirst(double num);
    void setSecond(int exponent);
};