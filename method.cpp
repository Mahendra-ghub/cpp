#include<iostream>
using namespace std;

class agriculture
{
 public:
 string dept;
 string sub;
 int code;
 agriculture(string x,string y,int z)
 {
  dept = x;
  sub = y;
  code= z;
 }
};
int main()
{
  agriculture obj("genecode","pathology",321);
  agriculture obj2("biotechnology","genecode",342);
  {
    cout<<obj.dept<<" "<<obj.sub<<" "<<obj.code<<endl;
    cout<<obj2.dept<<" "<<obj2.sub<<" "<<obj2.code<<endl;
  }
}