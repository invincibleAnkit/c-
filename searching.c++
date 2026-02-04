#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={10,20,30,40};
    if(find(v.begin(),v.end(),30)!=v.end()){
        cout<<"element found"<<endl;
    }
    else{
         cout<<"element not found";

    }

}