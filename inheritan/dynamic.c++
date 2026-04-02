#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 25;
    cout << *ptr;
    delete ptr;
    return 0;
}