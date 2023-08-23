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

    student(int r,int c,int s,char *n,char *f,char * m)
    {
       strcpy(name,n);
       roll = r;
       cls = c;
       section=s;
       strcpy(father_name,f);
       strcpy(mother_name,m);
       

    }



};
student fun()
{
     // student name
   char nm1[100]="Robiul islam siyam ";
   // father name
   char fn1[100]="Mizanur Rahman";
   // mother name
   char mn1[100]="Parul Akter";
   

   student s(12,9,'A',nm1,fn1,mn1);

   char nm2[100]="Robiul islam  ";
   // father name
   char fn2[100]="Mizanur ";
   // mother name
   char mn2[100]="Parul ";
   

   student r(13,8,'B',nm2,fn2,mn2);
   return s,r;
}
int main()
{  
    student s = fun();
   cout<<"Stdunt Name : "<<s.name<<endl;
   cout<<"student Class:"<<s.cls<<endl;
   cout<<"Student Roll:"<<s.roll<<endl;
   cout<<"Student Section:"<<s.section<<endl;
   cout<<"Student Section:"<<s.father_name<<endl;
   cout<<"Student Section:"<<s.mother_name<<endl;
 

cout<<"<--------------student secound name --------------------->"<<endl;
   student k = fun();
   cout<<"Stdunt Name : "<<k.name<<endl;
   cout<<"student Class:"<<k.cls<<endl;
   cout<<"Student Roll:"<<k.roll<<endl;
   cout<<"Student Section:"<<k.section<<endl;
   cout<<"Student Section:"<<k.father_name<<endl;
   cout<<"Student Section:"<<k.mother_name<<endl;
    return 0;
}