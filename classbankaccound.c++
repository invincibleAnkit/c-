#include<bits/stdc++.h>
using namespace std;
class account{
   private:
   string accounttype;
   string accountholdername;
   double balance;
   public:
   account(string acctype,double bal,string name){
      accounttype=acctype;
      accountholdername=name;
      balance=bal;
   }
   void deposit(double amount){
    if(amount>0){
        balance+=amount;
        cout<<"deposited"<<amount<<endl;
    }
    else{
        cout<<"invalid amount";
    }
   }void withdraw(double amount){
    if(amount>0&&amount<=balance){
        balance -= amount;
        cout<<"withdraw"<<amount<<endl;
    }
    else{
        cout<<"insufficient balance";
    }
}
    void display(){
        cout<<"account details"<<endl;
        cout<<"account type->"<<accounttype<<endl;
        cout<<"account holder name->"<<accountholdername<<endl;
        cout<<"balance->"<<balance;

    }
   };
   int main() {
 account acc1("Saving",5000,"Amit Sharma");

acc1.deposit(1500.0);
 acc1.withdraw(2000.0);

 acc1.display();
 return 0;

}