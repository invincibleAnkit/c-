#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    map<int,string>student={
        {101,"Neha"},
        {102,"Arnav"},
        {103,"tanu"}
    };
    for(auto it= student.begin();it!=student.end();it++){
         cout << it->first << " " << it->second << endl;
    }
return 0;
}