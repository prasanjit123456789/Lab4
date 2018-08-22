//include library
#include<iostream>
using namespace std;
//define function
int main(){
//define the variables of mark for each subject
  int phy, chem, math, cs, eng;
//ask the user about the marks
   cout<<"What is the marks in Physics, Chemistry, Mathematics, Computer Science and English respectively?"<<endl;
   cin>>phy; cin>>chem; cin>>math; cin>>cs; cin>>eng;
//calculate the total mark(t)
  int t=phy+chem+math+cs+eng;
//calculate avg mark(a)
      float a=t/5;
//asuming total max mark per each subject is 100
//calculate percentage(p)
   float p=(t*100)/500;
//print the output
  cout<<"The total mark is "<<t<<", avg mark is "<<a<<" and percentage of mark is "<<p;
  return 0;
}
