#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a="Hello_world";
    string::iterator it;
    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i];
    // }
    // cout<<*a.begin();
    // cout<<*(a.end()-1);
    for(auto it=a.begin();it<a.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}