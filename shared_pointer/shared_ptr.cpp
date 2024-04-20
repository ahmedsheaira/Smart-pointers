#include "shared_ptr.hpp"

SharedFoo::SharedFoo(int x) : x(x) {
}

int SharedFoo::get_x() {
    return x;
}

SharedFoo::~SharedFoo() {
    cout << "SharedFoo Dest" << endl;
}
