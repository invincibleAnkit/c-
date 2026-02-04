#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    set<int>s={10,20,30,40,50};
    cout<<"transversing";
    for(int x:s){
        cout<<x<<" ";
    }
    return 0;
}