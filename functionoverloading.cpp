#include<iostream>
using namespace std;

int myfunctionint(int x, int y);
 {
  return x + y;
 }
double myfunctiondouble(double x, double y);
 {
  return x + y;
 }

 int main()
 {
   int mynum = myfunctionint(5,6);
   double mydouble = myfunctiondouble(7.5,8.9);
   {
    cout<<"int:"<<mynum<<"\n";
    cout<<"double:"<<mydouble<<"\n";
   }
 }