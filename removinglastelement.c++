#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={12,2,3,4,5,6};
    v.pop_back();
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}