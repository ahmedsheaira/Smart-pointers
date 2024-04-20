#include <iostream>
#include <memory>
#include <thread>

using namespace std;

class SharedFoo {
private:
    int x;
public:
    SharedFoo(int x);
    int get_x();
    ~SharedFoo();
};