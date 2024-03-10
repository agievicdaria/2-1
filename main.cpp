#include <iostream>
#include "IntPower.h"
using namespace std;

IntPower makeIntPower(double f, int s) {
    if (s == 0) {
        cerr << "wrong arguments to Init" << endl;
    }

    return IntPower(f, s);
}

int main() {
    IntPower i1(1.5, 2);

    IntPower i2;
    cout << "Enter values for the object:" << endl;
    cin >> i2;

    IntPower i3 = i1;

    cout << "Object 1: " << i1 << endl;
    cout << "Object 2: " << i2 << endl;
    cout << "Object 3: " << i3 << endl;

    cout << "Power of Object 1: " << i1.power() << endl;

    IntPower i4 = makeIntPower(5.0, 4);
    cout << "Object 4: " << i4 << endl;

    ++i1;
    cout << "After prefix increment: " << i1.ToString() << endl;
    i1++;
    cout << "After postfix increment: " << i1.ToString() << endl;
    --i1;
    cout << "After prefix decrement: " << i1.ToString() << endl;
    i1--;
    cout << "After postfix decrement: " << i1.ToString() << endl;

    cout << "Size of IntPower without #pragma pack(1): " << sizeof(IntPower) << endl;

    #pragma pack(1)
    cout << "Size of IntPower with #pragma pack(1): " << sizeof(IntPower) << endl;
    #pragma pack()

    return 0;
}
