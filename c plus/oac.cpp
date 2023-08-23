#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section ;

};
int main()
{   
    student s;
    char nm[100]="Robiul islam ";
    strcpy(s.name,nm);
    s.roll=12;
    s.cls= 8;
    cout<<"Student name : "<<s.name<<endl;
    cout<<"Student class : "<<s.cls<<endl;
    cout<<"Student Roll : "<<s.roll<<endl;

    cout<<"<--------------------------------------------->"<<endl;
    student r;
    char nm1[100]="Robiul islam siyam  ";
    strcpy(r.name,nm1);
    r.roll=14;
    r.cls= 9;
    cout<<"Student name : "<<r.name<<endl;
    cout<<"Student class : "<<r.cls<<endl;
    cout<<"Student Roll : "<<r.roll<<endl;

    return 0;
}