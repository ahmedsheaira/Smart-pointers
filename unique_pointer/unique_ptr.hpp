#include <iostream>
#include <memory>

using namespace std;

class UniqueFoo {
private:
    int x;
public:
    UniqueFoo(int x);
    int get_x();
    ~UniqueFoo();
};