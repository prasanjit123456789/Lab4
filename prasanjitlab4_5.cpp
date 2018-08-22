//include library
#include<iostream>
#include<cmath>
using namespace std;
//define function
int main(){
//The trianjgle is ABC let angle is a and angle B is b 
//define the angles in radians as variable
    double a,b;
//ask the user for their values
   cout<<"Give the values of a and b respectively such that a+b<Pi"<<endl;
   cin>>a;
   cin>>b;
//determine the third angle
   double c=M_PI-a-b;
//print the third angle
   cout<<"The third angle is "<<c;
    return 0;
}
