#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    for(int i=0;i<a/2;i++)
    {   
        cout<<"&"<<endl;
        for(int j=i+1;j<a;j++)
        {
            cout<<"*"<<endl;
        }
    }
    return 0;
}