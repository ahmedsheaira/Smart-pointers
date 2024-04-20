#include <iostream>
#include <memory>

using namespace std;

class Foo {
private:
    int x;
public:
    Foo(int x);
    int get_x();
    ~Foo();
};