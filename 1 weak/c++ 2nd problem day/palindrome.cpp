#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // input nilam a range 
    int a;
    cin>>a;

    // input nilam array er

    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    
    // kaj 
    for(int i=0;i<a/2;i++)
    {
        if(ar[i] != ar[a-i-1])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES"<<endl;
    
    return 0;
}