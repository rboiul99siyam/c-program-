#include<bits/stdc++.h>
using namespace std;
// class and object groups 
class student{
    public:
   char name[100];
   int roll;
   int cls;
   char section;

   //construtor function er kaj korlam

   student (int r,char s,int c,char *nm)
   {
      strcpy(name,nm);
      roll = r;
      section = s;
      cls = c;
   }

};

int main()
{   

    char nm[100]="AR RAHAMAN";
    student * s = new student(23,'A',7,nm);
    cout<<"Clas name: "<<s->cls<<endl;
    cout<<"Class Roll: "<<s->roll<<endl;
    cout<<"Section  "<<s->section<<endl;
    cout<<"Student Name:  "<<s->name<<endl;
   
    return 0;
}