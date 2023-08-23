#include<bits/stdc++.h>
using namespace std;
int main()
{   

    //input nilam a , b c er
    int a,b,c;
    cin>>a>>b>>c;

    // min value ber korar kaj 

    int mn  = min(a,b);
    int mn1 = min(mn,c);
    cout<<mn1;
    
    //space print kora hoyche 
    cout<<" ";
    // max value  ber korar kaj 

    int mx = max(a,b);
    int mx1 = max(mx,c);
    cout<<mx1;

    return 0;
}