#include<bits/stdc++.h>
using namespace std;

class parson{

    public:
    string name;
    float height;
    int age;

    parson (string name,float height,int age)
    {
        this->name = name;
        this->height = height;
        this->age = age;
        
    }

};
int main()
{   
 
 parson * bio = new parson("Rakibul islam",5.9,20);
 cout<<bio->name<<endl;
 cout<<bio->height<<endl;
 cout<<bio->age<<endl;
    return 0;
}