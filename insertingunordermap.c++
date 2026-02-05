#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>um;
    um[1]={"TVS"};

    um.insert({2,"hero"});
     um.insert({3,"maruti"});
  
     for(auto i :um){
        cout<<i.first<<" "<<i.second<<endl;
     }
            return 0;

}