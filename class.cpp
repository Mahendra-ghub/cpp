#include<iostream>
using namespace std;

class agriculture
{
  public:
    int subjects;
    string course;
};

int main()
{
    agriculture myobj;
    myobj.subjects = 9;
    myobj.course = "soil science";

    agriculture mysub2;
    mysub2.subjects = 10;
    mysub2.course = "pathology";

{
    cout<<myobj.subjects<<" "<<myobj.course<<endl;
    cout<<mysub2.subjects<<" "<<mysub2.course<<endl;
}
}
