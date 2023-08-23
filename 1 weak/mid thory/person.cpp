#include<bits/stdc++.h>
using namespace std;

class porson{
    public:
    char name[100];
    float height;
    int age;

    porson (int a,float h,char *n)
    {
       strcpy(name,n);
       height = h;
       age = a;
    }


};
int main()
{   
    char nm[100]="Robiul islam";
  porson * s =new porson(18,5.7,nm);
  cout<<s->name<<endl;
  cout<<s->height<<endl;
  cout<<s->age<<endl;
    return 0;
}