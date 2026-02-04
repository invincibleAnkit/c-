#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main(){
    set<int>s={12,23,43,54,65,67};
    if(s.count(54)){
        cout<<"element present";
    }
    else{
        cout<<"element not present";

    }

}