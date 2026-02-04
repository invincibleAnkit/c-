#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    set<int>s; 
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for(int x:s){
        cout<<x<<" ";
    }
   return 0;
}