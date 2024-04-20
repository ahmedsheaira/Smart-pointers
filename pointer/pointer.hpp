#include <iostream>
using namespace std;

class MyInt {
private:
    int* data;
public:
    explicit MyInt(int* p);
    ~MyInt();
    int& operator * ();
};