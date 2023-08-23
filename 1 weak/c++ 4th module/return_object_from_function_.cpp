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
student fun()
{
     // function argument dilam
    char nam[100]="Abdul korim";
   student s(29,'A',9,nam);
   return s;

}
int main()
{   
  student r = fun();
  // cout korbo 
  cout<<r.name<<endl;
  cout<<r.roll<<endl;
  cout<<r.cls<<endl;
  cout<<r.section<<endl;


  


    return 0;
}