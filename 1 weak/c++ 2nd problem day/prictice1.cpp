#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    char name[100]; 
	  int roll;
	  char section;
	  int math_marks;
	  int cls;
  
  student (char * nn,int r,int s,int mk,int c)
  {
    strcpy(name,nn);
    roll = r;
    section = s;
    math_marks = mk;
    cls = c;
   
  }

};
int main()
{   
   // student one
    char nm[100]="Abdul korim";
    student s1(nm,12,'A',30,7);
   

    //student two 
    char nm1[100]="Abdul Rohim";
    student s2 (nm1,13,'B',21,7);
  
    
    // student three 
    char nm2[100]="Abdul malek"; 
    student s3(nm2, 14 ,'C',52,7);
  
   

   if(s1.math_marks>s2.math_marks && s1.math_marks>s3.math_marks)
   {
    cout<<s1.name;
   }
   else if(s2.math_marks>s1.math_marks && s2.math_marks>s3.math_marks)
   {
    cout<<s2.name;
   }
   else
   {
     cout<<s3.name;
   }

    return 0;
}