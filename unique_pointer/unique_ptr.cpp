#include "unique_ptr.hpp"

Foo::Foo(int x) : x(x) {
}

int Foo::get_x() {
    return x;
}

Foo::~Foo() {
    cout << "Foo Dest" << endl;
}
