#include<bits/stdc++.h>
using namespace std;
class student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section ;
    char father_name[100];
    char mother_name[100];

    student(int r,int c,int s,char *n)
    {
       strcpy(name,n);
       roll = r;
       cls = c;
       section=s;

    }



};
int main()
{   
    char name[100]="Robiul islam";
    student *r = new student(12,8,'A',name);
    cout<<r->cls<<endl;
    cout<<r->name<<endl;
    return 0;
}