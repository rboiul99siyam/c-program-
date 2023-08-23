#include<bits/stdc++.h>
using namespace std;
class student{
 public:
   string name;
   int roll;
   int section;
   int cls;
   int math_marks;

   student (string name,int roll,int section,int cls,int math_marks)
   {
      this->name=name;
      this->roll = roll;
      this->section = section;
      this->cls = cls;
      this->math_marks = math_marks;

   }
};
int main()
{   
  student *s = new student("showon",23,'A',9,35);
  student *r = new student("rhowon",24,'A',9,45);
  student *k = new student("khowon",25,'A',9,55);
  cout<<r->cls;

  if(s->math_marks > r->math_marks && s->math_marks>k->math_marks)
  {
    cout<<s->name;
  }
  else if(r->math_marks > s->math_marks && r->math_marks>k->math_marks)
  {
    cout<<r->name;
  }
  else{
    cout<<k->name;
  }
    return 0;
}