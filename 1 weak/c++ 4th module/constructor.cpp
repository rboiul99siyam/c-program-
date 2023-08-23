#include<bits/stdc++.h>
using namespace std;

class student{
    public:
      char name[100];
      int roll;
      int cls;
      char cnn_name[100];

      student (int r,int c,char * a,char * b)
      {
        strcpy(name,a);
        roll = r;
        cls = c;
        strcpy(cnn_name,b);
      }
};
int main()
{   
    char nm[100]="robiul ismal";
    char nn[100] ="bangldesh is nice country ";
    student s(12,7,nm,nn);
    cout<<s.cls;
    cout<<s.name;
    cout<<s.cnn_name;
    return 0;
}