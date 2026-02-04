#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string>m={{2,"to"},{3,"go"}};
    m.insert({1,"good"});
   cout<<m[2]<<endl;
     cout<<m.at(3);
    
    return 0;
}