#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
    int roll;
};
int main()
{  student s;
   char n[100]="Robiul islam";
   strcpy(s.name,n);
   s.roll = 12;
   cout<<s.name<<endl;
   cout<<s.roll;
    
    return 0;
}