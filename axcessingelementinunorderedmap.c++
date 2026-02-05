#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>um;
    um[1]={"TVS"};
    um.insert({2,"hero"});
     um.insert({3,"maruti"});
      um[3];
     um.at(2);
     for(auto i :um){
        cout<<i.first<<" "<<i.second<<endl;
     }
     cout << um.at(2) << endl; 
       cout << um[3] << endl; 
            return 0;

}