#include <iostream>

using namespace std;

class A
{
public:
    void foo() {cout << "1" << endl; }
    virtual void fun() {cout << "2" << endl; }
};

class B: public A
{
public:
    void foo() {cout << "3" << endl; }
    virtual void fun() {cout << "4" << endl; }
};

int main()
{
    A a;  
    B b;  
    A *p = &a;
    B *q = &b;  
    p->foo();  //输出1
    p->fun();  //输出2
    p = &b;  
    p->foo();  //取决于指针类型，输出1
    p->fun();  //取决于对象类型，输出4，体现了多态

    q->foo();
    q->fun();

    return 0;
}