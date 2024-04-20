#include <iostream>
#include "pointer/pointer.hpp"

int main() {
    cout << "This is Pointer Demo!" << endl;
    int* p = new int(10);
    MyInt myint = MyInt(p);
    cout << *myint << endl;
}