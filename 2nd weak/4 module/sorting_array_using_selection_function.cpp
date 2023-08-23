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
   else{
    return false;
   }
}
int main()
{   

    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].roll;
        cin>>ar[i].marks;
        cin.ignore();

    }
    sort(ar,ar+3,cmp);
    // for(int i=0;i<2;i++)
    // {
    //     for(int j=i+1;j<3;j++)  
    //     {
    //         if(ar[i].marks>ar[j].marks)
    //         {
    //             swap(ar[i],ar[j]);
    //         }
    //     }
    // }
    
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<" "<<endl;
    }
    return 0;
}