//include library
#include<iostream>
using namespace std;
//define function
int main(){
//define variable in days
  int totaldays;
//ask the no of days to the user
  cout<<"What is the no of the days?"<<endl;
  cin>>totaldays;
//define no of years(y) by dividing 365
   int y=totaldays/365;
   int r=totaldays%365;
//define no of weeks(w) by dividing the reminder with 7
   int w=r/7;
//the reminder remained is no of days(d) remained
   int d=r%7;
   cout<<totaldays<<" days is "<<y<<"years "<<w<<"weeks and "<<d<<"days.";
  return 0;
}
