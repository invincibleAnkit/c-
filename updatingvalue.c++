#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string>m={{2,"Mango"},{3,"Papaya"}};
    m.insert({1,"grapes"});
    m[2]="dragon fruit";
    m.at(3)="apple";
   cout<<m[2]<<endl;
     cout<<m.at(3);
    
    return 0;
}