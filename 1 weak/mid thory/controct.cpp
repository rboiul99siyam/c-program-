#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    char name[100];
    int roll;

    student(int r,char *n){
       strcpy(name,n);
       roll = r;
    }
};
int main()
{  char nm[100]="Robiul islam";
   student s(12,nm);
   cout<<s.name<<endl;
   cout<<s.roll;
    
    return 0;
}