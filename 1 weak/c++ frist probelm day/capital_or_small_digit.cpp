#include<bits/stdc++.h>
using namespace std;
int main()
{   
    char ch;
    cin>>ch;

    if(ch>60 && ch<=90)
    {
        cout<<"ALPHA\nIS CAPITAL";
    }
    else if(ch>90 && ch<=122)
    {
        cout<<"ALPHA\nIS SMALL";
    }
    else
    {
        cout<<"IS DIGIT";
    }
    return 0;
}