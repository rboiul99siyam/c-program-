#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    char name[100];
    int roll;

    student(int r,char * n)
    {
        strcpy(name,n);
        int roll = r;
    }
};
int main()
{   
   
   char nm[100]="robi islam";
   student r(23,nm);
   cout<<r.name;
    return 0;
}