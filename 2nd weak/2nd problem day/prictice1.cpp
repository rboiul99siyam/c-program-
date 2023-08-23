#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(student a,student b)

{
   if(a.marks>b.marks)
   {
    return true;
   }
   else if(a.marks==b.marks)
   {
    if(a.roll<b.roll)
    {
        return true;
    }
    else return false;
   }
   else return false;
}
int main()
{   
    int n;cin>>n;
    cin.ignore();
    student ar[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].roll>>ar[i].marks;
        cin.ignore();
    }
    sort(ar,ar+n,cmp);
    cout<<"-------------student information-----------------------"<<endl;
    for(int i=0;i<n;i++)
    {   
      
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }

    return 0;
}