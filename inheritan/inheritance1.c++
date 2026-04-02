#include<iostream>
using namespace std;

class Camera{
    public:
    void takePhoto(){
        cout<<"Photo captured"<<endl;
       
    }
};

class Phone{
    public:
    void makeCall(){
        cout<<"calling"<<endl;
    }
};
class Smartphone:public Camera,public Phone{

};
int main(){
    Smartphone s;
    s.takePhoto();
    s.makeCall();
    return 0;
}