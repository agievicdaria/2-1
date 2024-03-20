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

    double getFirst() const { return first; }
    int getSecond() const { return second; }
    void setFirst(double num);
    void setSecond(int exponent);

    friend double operator^(const IntPower& number, const IntPower& exponent);
    friend istream& operator>>(istream&, IntPower&);
    friend ostream& operator<<(ostream&, const IntPower&);
    operator string() const;
    IntPower& operator= (const IntPower&);

    IntPower& operator++();
    IntPower& operator--();
    IntPower operator++(int);
    IntPower operator--(int);
};