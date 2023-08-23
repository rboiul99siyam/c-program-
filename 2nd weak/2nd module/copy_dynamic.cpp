#include<bits/stdc++.h>
using namespace std;
class parson{
  public:
    string name;
    int age;

    parson (string name,int age)
    {
      this->name = name;
      this->age = age;
    }
};
int main()
{   
   parson* rakib = new parson("Rakib Ahson",25);
   parson* sakib = new parson ("Sakib ahamed",23);
//    rakib = sakib;
//    rakib->name = sakib->name;
//    rakib->age = sakib->age;
   *rakib = *sakib;
   delete sakib;
   cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}