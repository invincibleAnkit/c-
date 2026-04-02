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

class Dog:public Animal{
public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};


int main(){
    Dog d;
    d.breathing();
    d.eat();
    d.bark();
    return 0;
}