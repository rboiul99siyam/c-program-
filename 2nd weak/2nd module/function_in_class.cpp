#include<bits/stdc++.h>
using namespace std;
class parson{
    public:
      string name;
      int age;
      int marks1;
      int marks2;

    parson(string name,int ag,int mk1,int mk2)
    {
        this->name=name;
        age = ag;
        marks1 = mk1;
        marks2 = mk2;
    }  
    void fun()
    {
        cout<<name<<" "<<age<<endl;
    }
    int sum()
    {
        return marks1+marks2;
    }

   
};
int main()
{   
   parson rakib("Robiul islam",24,80,90);
   rakib.fun();
   cout<<rakib.sum();
    return 0;
}