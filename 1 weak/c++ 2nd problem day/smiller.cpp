#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    for(int test=0;test<a;test++)
    {
        int n;
        cin>>n;
        int * ar = new int[n];

        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        int mn = INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {

                if(ar[i]+ar[j]+j-i)
                {
                    mn = min(mn,ar[i]+ar[j]+j-i);
                }
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}