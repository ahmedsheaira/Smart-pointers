#include "pointer.hpp"

MyInt::MyInt(int* p) : data(p) {
}

int& MyInt::operator * () {
    return *data;
}

MyInt::~MyInt() {
    delete data;
}
