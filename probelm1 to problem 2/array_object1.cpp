#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name ;
    int roll;
    int age;

};
int main()
{   
    student ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].roll>>ar[i].age;
        cin.ignore();
    }
     
     for(int i=0;i<3;i++)
     {
        cout<<"student inforamation: "<<endl;
        cout<<"Your Name: "<<ar[i].name<<endl;
        cout<<"Your rollnumber: "<<ar[i].roll<<endl;
        cout<<"Your age: "<<ar[i].age<<" "<<endl;
     }
    return 0;
}