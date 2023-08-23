#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
        }

        int cnt = 0;
        int cnt1 = 0;
        if(n%2!=0)
        {
            cout<<"-1"<<endl;
            // break;
        }
        else
        {
            for(int j=0;j<n;j++)
        {
        
            if(ar[j]%2==0)
            {
                cnt++;
               
            }
            else
            {
             cnt1++;
            }
        }
       if(cnt==cnt1)
       {
        cout<<"0"<<endl;
       }
       else
       {
        cout<<abs(cnt-n/2)<<endl;
       }
        }
    }
    return 0;
}