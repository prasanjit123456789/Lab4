//include library
#include<iostream>
using namespace std;
//define function
int main()
{
//enter the variable
   float f; /* f is the value in fahrenheit*/
 //ask the user the temperature in fahrenheit
  cout<<"What is the temperature in fahrenheit?"<<endl;
  cin>>f;
//convert it into celcius
  float c=(f-32)/1.8;  /* c is the value in celcius*/
//print the value in celcius
  cout<<"The temperature in celcius is "<<c;
  return 0;
}
