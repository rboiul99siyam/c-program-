#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }

    int mx = INT_MIN;
    for(int i=0;i<a;i++)
    {
        mx = max(mx,ar[i]);
    }
    cout<<mx;
    return 0;
}