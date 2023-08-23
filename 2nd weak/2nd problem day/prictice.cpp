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

    int n;
    cin>>n;
    cin.ignore();
    student ar[n];
    for(int i=0;i<n;i++)
    {
       getline(cin,ar[i].name);
       cin>>ar[i].marks>>ar[i].roll;
       cin.ignore();
    }
    cout<<"---------------------Student information------------------------------"<<endl;
    reverse(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }

    return 0;
}