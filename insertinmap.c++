#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string>m={{2,"to"},{3,"go"}};
    m.insert({1,"good"});

    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}