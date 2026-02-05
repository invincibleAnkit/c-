#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>um={
   {101,"Amit"} ,
   {102,"ankit"},
   {103,"Tanu"}
    };
    for(auto it=um.begin();it!=um.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}