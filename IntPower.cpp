#include "IntPower.h"
#include <cmath>
#include <sstream>
using namespace std;

IntPower::IntPower() {
    first = 0.0;
    second = 0;
}

IntPower::IntPower(double f, int s) {
    first = f;
    second = s;
}

IntPower::IntPower(const IntPower& number) {
    first = number.first;
    second = number.second;
}

void IntPower::setFirst(double num) {
    first = num;
}

void IntPower::setSecond(int exponent) {
    second = exponent;
}

double IntPower::power() const
{
    return pow(first, second);
}

istream& operator>>(istream& in, IntPower& obj) {
    cout << "Enter the base (first): ";
    in >> obj.first;
    cout << "Enter the exponent (second): ";
    in >> obj.second;
    return in;
}

ostream& operator<<(ostream& out, const IntPower& obj) {
    out << "Base: " << obj.first << ", Exponent: " << obj.second;
    return out;
}

IntPower& IntPower::operator++() {
    first++;
    return *this;
}

IntPower& IntPower::operator--() {
    first--;
    return *this;
}

IntPower IntPower::operator++(int) {
    IntPower i(*this);
    second++;
    return i;
}

IntPower IntPower::operator--(int) {
    IntPower i(*this);
    second--;
    return i;
}

string IntPower::ToString() const {
    stringstream sout;
    sout << "Base: " << first << ", Exponent: " << second;
    return sout.str();
}
