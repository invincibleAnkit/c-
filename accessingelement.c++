#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={10,20,30,40,50};
    cout<<"second element with index:"<<v[2]<<endl;
    cout<<"third  element with at():"<<v.at(3);


    return 0;
}