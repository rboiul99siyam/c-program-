#include<bits/stdc++.h>
using namespace std;

class parson
{
    public:
    string name;
    int roll;
    int age;

};
bool cmp(parson a,parson b)
{
    if(a.age<b.age) return true;
    else return false;
}
int main()
{ 
    parson ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].roll;
        cin.ignore();
    }  

    sort(ar,ar+3,cmp);
    for(int i=0;i<3;i++)
    {
        cout<<"student information :"<<endl;
    cout<<ar[i].name<<endl;
    cout<<ar[i].roll<<endl;
    cout<<ar[i].age<<endl;
    }
    return 0;
}