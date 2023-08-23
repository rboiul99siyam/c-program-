#include<bits/stdc++.h>
using namespace std;

namespace rakib{
    int age = 12;
    void fun()
    {
        cout<<"good morning";
    }
    class parson{
       string name;
       int cls;

       parson (string name,int cls)
       {
         this->name = name;
         this->cls = cls;
       }
    };

}
namespace rakib1{
    int age1 = 21;
    void fun1()
    {
        cout<<"good morning mm";
    }

}
using namespace rakib;
using namespace rakib1;
int main()
{   
 cout<<age;
 fun(); 
 cout<<age1;
 fun1(); 
 

    return 0;
}