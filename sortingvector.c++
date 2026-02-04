#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={10,5,21,4,0};
    sort(v.begin(),v.end());
    cout<<"sorted array";
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}