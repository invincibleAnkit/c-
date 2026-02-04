#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>student;
    student[501]="Ankit";
    student[502]="Simran";
    student[503]="Rahul";
    student[504]="Lokesh";

    for(auto p: student){
        cout<<p.first<<"=>"<<p.second<<endl;
    }

}