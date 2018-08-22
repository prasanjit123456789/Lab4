//include library
#include<cmath>
#include<iostream>
using namespace std;
//define function
int main(){
//define variables for principal(p), time in year(t), rate per year(r)
 long int p; int t; float r;
//ask the user about these values
   cout<<"What is the principal,timeperiod,rate respectively?"<<endl;
   cin>>p; cin>>t; cin>>r;
//determine the total 
   double c=pow((1+(r/100)),t);
   double a=p*c;
//determine the compund interest(i)
   double i=a-p;
//print the output
  cout<<"The copound interest is "<<i;   
  return 0;
}
