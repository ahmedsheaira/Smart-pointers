#include <iostream>
#include "pointer/pointer.hpp"
#include "unique_pointer/unique_ptr.hpp"

int main() {
    cout << "This is Pointer Demo!" << endl;
    int* p = new int(10);
    MyInt myint = MyInt(p);
    cout << *myint << endl;

    cout << "This is Unique Pointer Demo!!" << endl;
    // unique_ptr<Foo> f(new Foo(10));
    // cout << f->get_x() << endl;
    unique_ptr<Foo> uptr1(new Foo(10));
    /* 
     * Should use make_unique because it is exception safe, if you are creating an object and there is some exception,
     * it will handle that
     */
    unique_ptr<Foo> uptr2 = make_unique<Foo>(20);  
    cout << uptr1->get_x() << (*uptr2).get_x() << endl;

    // uptr1 = uptr2; FAIL : This will fail beacuse you can not copy ownership.
    unique_ptr<Foo> uptr3 = std::move(uptr1);  // It will pass because moving ownership is allowed.
    cout << uptr3->get_x() << endl;

    return 0;
}