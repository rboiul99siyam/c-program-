#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int age;
};
int main()
{   

    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].age>>ar[i].roll;
        cin.ignore();

    }
    student mx;
    mx.age = INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(ar[i].age>mx.age)
        {
            mx=ar[i];
        }
    }
    cout<<mx.name<<" "<<endl;cout<<mx.age<<" "<<endl;cout<<mx.roll<<endl;

    student mn ;
    mn.roll = INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(ar[i].roll<mn.roll)
        {
            mn = ar[i];
        }
    } 
    cout<<mn.name<<" "<<endl;cout<<mn.age<<" "<<endl;cout<<mn.roll<<endl;
    return 0;
}