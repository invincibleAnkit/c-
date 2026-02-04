#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={12,13,14,15,16};
    v.erase(v.begin()+2);
    for(int x:v){
        cout<<x<<" ";
    }
}