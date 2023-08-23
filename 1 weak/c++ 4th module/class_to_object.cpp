#include<bits/stdc++.h>
using namespace std;
// class and object groups 
class student{
    public:
   char name[100];
   int roll;
   int cls;
   char section;
};
int main()
{   
    student s;
    // information in student of s 
    char nm[100]="Abdul Korim mal";
    strcpy(s.name,nm);
    s.roll = 12;
    s.cls = 11;
    s.section = 'A';

    // cout student information of s
    cout<<"<----------------- frist student information ------------------->"<<endl;
    cout<<"Student Name : "<<s.name<<endl;
    cout<<"Student Roll: "<<s.roll<<endl;
    cout<<"Student class:"<<s.cls<<endl;
    cout<<"Student section: "<<s.section<<endl; 


    cout<<endl; 
   // student informaition of a
   student r;
    char nm1[100]="Khan shaheb";
    strcpy(r.name,nm1);
    r.roll = 13;
    r.cls = 8;
    r.section = 'B';

    //cout student information of a
     cout<<"<----------------- secound student information ------------------->"<<endl;
    cout<<"Student Name : "<<r.name<<endl;
    cout<<"Student Roll: "<<r.roll<<endl;
    cout<<"Student class:"<<r.cls<<endl;
    cout<<"Student section: "<<r.section<<endl;  


    return 0;
}