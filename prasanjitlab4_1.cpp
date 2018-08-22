//include library
#include<iostream>
using namespace std;

int main()
{
//declair variables
   float valueInCms;
   cout<<"What is the value in centimeters?"<<endl;
//assign value by terminal in unit of centimeter
  cin>>valueInCms;
  //convert into meter by deviding 100
     double valueInMeter=valueInCms/100;
//convert into kilometer by dividing 1000 by valueInMeter
   long double valueInKms=valueInMeter/1000;
//print the value in meter and kilometer
   cout<<"The value in meter is"<<valueInMeter<<endl;
   cout<<"The value in kilometer is"<<valueInKms;
   return 0;
}
