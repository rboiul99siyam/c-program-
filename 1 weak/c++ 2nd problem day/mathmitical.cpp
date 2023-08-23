#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b,rs=0;
    char op,eq;

    cin>>a>>op>>b>>eq>>rs;

    if(op=='+' && eq=='=' && a+b==rs)
    {
        cout<<"Yes";
    }
    else if(op=='-' && eq=='=' && a-b==rs)
    {
        cout<<"Yes";
    }
    else if(op=='*' && eq=='=' && a*b==rs)
    {
        cout<<"Yes";
    }
    else
    {
        if(op=='+')
        {
            cout<<a+b;
        }
        else if(op=='-')
        {
            cout<<a-b;
        }
        else if(op=='*')
        {
            cout<<a*b;
        }
    }
    return 0;
}