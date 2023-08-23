#include<bits/stdc++.h>
using namespace std;
class parson{
  public:
    string name;
    int roll;

    parson(string name,int roll)
    {
        (*this).name = name;
        (*this).roll = roll;
    //   this->name = name;
    //   this->roll = roll;
    }
};
int main()
{   
    parson s("Robiul islam",23);
    cout<<s.name<<" "<<s.roll<<" "<<endl;

    return 0;
}