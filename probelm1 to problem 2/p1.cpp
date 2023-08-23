#include<bits/stdc++.h>
using namespace std;
int main()
{   
    char a;
    cin>>a;
    if(a>=65 && a<=90)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPTIAL"<<endl;
    }
    else if(a>=90 && a<=122)
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else
    {
        cout<<"IS DIGIT ";
    }
    return 0;
}