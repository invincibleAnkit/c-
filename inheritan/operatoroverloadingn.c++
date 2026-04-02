#include <iostream>
using namespace std;

class Test {
public:
    int x;
    Test(int a) {
        x = a;
    }
    Test operator+(Test t) {
        return Test(x + t.x);
    }
};

int main() {
    Test t1(10), t2(20);
    Test t3 = t1 + t2;
    cout << t3.x;
    return 0;
}