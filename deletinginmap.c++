#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string>m={
        {101,"Ford"},
        {102,"ferrari"},
        {103,"mustang"},
        {104,"maruti"},
    };
        m.erase(102);

        m.erase(m.begin());

        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
          
        }

return 0;

    
}