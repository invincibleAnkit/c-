#include<iostream>
using namespace std;

class LivingBeing{
    public:
    void breathing(){
        cout<<"Breathing"<<endl;
    }
};
class Animal:public LivingBeing{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};

int main(){
    Dog d;
    d.breathe();
    d.eat();
    d.bark();
    return 0;
}