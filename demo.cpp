#include <iostream>

using namespace std;

class A
{
public:
    void foo() {cout << "1" << endl; }
    virtual void fun() {cout << "2" << endl; }
    virtual void fun1() = 0;
    virtual ~A() {cout << "destrut A" << endl;}
};

class B: public A
{
public:
    void foo() {cout << "3" << endl; }
    virtual void fun() {cout << "4" << endl; }
    void fun1() {cout << "5" << endl;}
    ~B() {cout << "destrut B" << endl;}
};

int main()
{
    // A a;
    B b;
    // A *p = new B;
    // B *q = new B;
    A *p = &b;
    p->fun1();
    // delete p;
    // delete q;
    p->foo();
    p->fun();
    return 0;
}