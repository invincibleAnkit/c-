#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

int main() {
    Test* ptr = new Test;
    ptr->x = 50;
    cout << ptr->x;
    delete ptr;
    return 0;
}