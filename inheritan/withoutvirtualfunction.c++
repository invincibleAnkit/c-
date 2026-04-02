#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base";
    }
};

class B : public A {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    A* ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}