#include<bits/stdc++.h>
using namespace std;

class parson{
    public:
    string name;
    int age;
    int mk1;
    int mk2;

    parson (string name,int age,int mk1,int mk2)
    {
     this->name = name;
     this->age = age;
     this->mk1 = mk1;
     this->mk2 = mk2;
     
    }
    void fun()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
   int fun1()
   {
    return mk1+mk2;
   }
};
int main()
{   
   parson rr("rhowon",23,56,56);
    rr.fun();
   cout<<rr.fun1();

    return 0;
}