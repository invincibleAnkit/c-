#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={2,3,4,5,23};
    cout<<"vector elements are";
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}