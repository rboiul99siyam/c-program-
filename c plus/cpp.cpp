#include<bits/stdc++.h>
using namespace std;
int main()
{   
    char ch;
    cin>>ch;
    if(ch>65 && ch<=90)
    {
        cout<<"ALPA\ncapital world"<<endl;
    }
    else if(ch>97 && ch<=122)
    {
        cout<<"ALPA \n SMALL WORLD"<<endl;
    }
    else
    {
        cout<<"IS DIGITS ";
    }
    return 0;
}