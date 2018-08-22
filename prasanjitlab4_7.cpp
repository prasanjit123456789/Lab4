//include library

#include<iostream>
#include<cmath>
using namespace std;
//define function
int main(){
//define the variable of the side(l) of the equilateral triangle
  float l;
//ask the user the length of the side of the equilateral trangle
    cout<<"What is the length of the side of the equilateral triangle?"<<endl;
    cin>>l;
//calculate the area(a) of the triangle
     double a=sqrt(3)*l*l/4;
//print the area
  cout<<"Area of the triangle is "<<a;
   return 0;
}
