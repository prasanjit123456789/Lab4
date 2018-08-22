//include library
#include<iostream>
using namespace std;
//define function
int main()
{
//define variable
  float c; /*c is the variable for celcius*/
//ask the value in celcius by terminal
   cout<<"What is the temperature in celcius?"<<endl;
    cin>>c;
//convert into fahrenheit
   double f=(c*1.8)+32; /*f is the variable for fahrenheit*/
//print the valuein fahrenheit
   cout<<"The temperature in fahrenheit is "<<f;
  return 0;
}
