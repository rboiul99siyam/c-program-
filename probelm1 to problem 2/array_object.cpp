#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
};
int main()
{   
  
  student ar[3];
  for(int i=0;i<3;i++)
  {
    getline(cin,ar[i].name);
    cin>>ar[i].roll>>ar[i].marks;
    cin.ignore();
  }

  for(int i=0;i<3;i++)
  {
    cout<<"student information :"<<endl;
    cout<<ar[i].name<<endl;
    cout<<ar[i].roll<<endl;
    cout<<ar[i].marks<<endl;
  }

    return 0;
}