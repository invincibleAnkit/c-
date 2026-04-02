#include <iostream>
using namespace std;

class A {
public:
    virtual void display() {
        cout << "A";
    }
};

class B : public A {
public:
    void display() {
        cout << "B";
    }
};

int main() {
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->display();
    return 0;
}