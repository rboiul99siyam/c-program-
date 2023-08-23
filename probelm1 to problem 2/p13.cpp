#include<bits/stdc++.h>
using namespace std;
class student{

    public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

student(char *n,int r,int s,int ma,int cl)
{
   strcpy(name,n);
   roll = r;
   section = s;
   math_marks = ma;
   cls = cl;
}

};
int main()
{   
    char na[100] = "Robiul islal";

   student ra(na,23,'A',80,8);
 
   char nam[100]= "Siyam khan ";
   student rr(nam,24,'A',98,9);
   if(ra.math_marks > rr.math_marks)
   {
    cout<<ra.name;
   }
   else if(ra.math_marks<rr.math_marks)
   {
    cout<<rr.name;
   }

    return 0;
}