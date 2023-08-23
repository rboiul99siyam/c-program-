#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b,re=0;
    char eq,op;
    cin>>a>>op>>b>>eq>>re;

    if(op=='+' && eq=='=' && a+b==re)
    {
        cout<<"Yes";
    }
    else if(op=='-' && eq=='=' && a-b==re)
    {
        cout<<"Yes";
    }
    else if(op=='*' && eq=='=' && a*b==re)
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