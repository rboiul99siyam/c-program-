#include<bits/stdc++.h>
using namespace std;

class student
{
  public:
  string name;
  int cls;
  char section;
  int math_marks;
  int eng_marks;
};
int main()
{   
    
    int n;
    cin>>n;
    student ar[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].cls>>ar[i].section>>ar[i].math_marks>>ar[i].eng_marks;
    }
    reverse(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].section<<" "<<ar[i].math_marks<<" "<<ar[i].eng_marks<<endl;
    }
    return 0;

}