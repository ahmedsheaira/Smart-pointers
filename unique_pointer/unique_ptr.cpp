#include "unique_ptr.hpp"

UniqueFoo::UniqueFoo(int x) : x(x) {
}

int UniqueFoo::get_x() {
    return x;
}

UniqueFoo::~UniqueFoo() {
    cout << "UniqueFoo Dest" << endl;
}
