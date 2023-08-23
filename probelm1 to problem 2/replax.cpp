#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string a;
    cin>>a;
    while(a.find("robi")!= -1)
    {
        a.replace(a.find("robi"),4," ");
    }
    cout<<a;
    return 0;
}