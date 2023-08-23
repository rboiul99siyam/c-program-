#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // value er range input nilam 
    int a;
    cin>>a;
    
    //array  er value input nilam
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }

    // max value ber korar jonno kaj korch ekhane 
    
    int mx=0;
    for(int i=0;i<a;i++)
    {
     mx = max( mx,ar[i]);
    }
    
    // output dekhar jonno kaj korchi

     cout<<mx;
    return 0;
}