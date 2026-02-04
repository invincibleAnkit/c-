#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    set<int>s={12,23,21,24,26};
    if(s.find(21)!=s.end()){
        cout<<"element found";
    }
    else{
        cout<<"element not found";

    }
    return 0;

}