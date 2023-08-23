#include<bits/stdc++.h>
using namespace std;

class student{
  
  public:
     string name;
     int roll;
     int marks;
    
    //আমরা এখানে কন্সট্রেক্ট্রকর ব্যবহার করলে এরে ব্যবহার তে প্রবলেম করবে।
    //  student (string name ,int roll ,int marks)
    //  {
    //    this->name = name;
    //    this->roll = roll;
    //    this->marks = marks;
    //  }

};
int main()
{   
    student a[3];
    for(int i=0;i<3;i++)
    {
       getline(cin,a[i].name);
       cin>>a[i].roll>>a[i].marks;
       
       // amr jodi getline diye input ney tahole enter niye fele getline tai amader cin.ignore()dite hobe;
       cin.ignore();
    }

    for(int i=0;i<3;i++)
    {
        cout<<a[i].name<<endl;
        cout<<a[i].roll<<endl;
        cout<<a[i].marks<<endl;
    }
    return 0;
}