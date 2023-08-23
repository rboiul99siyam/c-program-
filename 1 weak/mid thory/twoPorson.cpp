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
  char nm1[100]="siyam islam";
  porson * r= new porson(19,5.8,nm1);
  if(s->age > r->age)
  {
    cout<<s->name<<endl;
  }
  else if(r->age > s->age)
  {
    cout<<r->name<<endl;

  }
    return 0;
}