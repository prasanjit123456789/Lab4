//include library
#include<iostream>
using namespace std;
//define function
int main(){
//define variables for principal(p), rate per year(r) and time(t)
      long int p; float r; int t;
//ask the user the values of p, t, r
     cout<<"What is the value of principal,time period(inyears) and rate per year respectively?"<<endl;
   cin>>p; cin>>t; cin>>r;
//calculate the simple interest(i)
    long int i=p*t*r/100;
//print the simple interest
    cout<<"The simple interest is "<<i;
  return 0;
}
