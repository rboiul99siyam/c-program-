#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    int mm = min(a,b);
    int mm1 = min(mm,c);
    cout<<mm1<<" ";

    int mx = max(a,b);
    int mx1 = max(mx,c);
    cout<<mx1<<" ";


    return 0;
}