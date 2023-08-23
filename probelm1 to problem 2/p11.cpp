#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int a;
        cin>>a;
        int *ar= new int[a];
        for(int i=0;i<a;i++)
        {
            cin>>ar[i];
        }

        int mn = INT_MAX;
        for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(ar[i]+ar[j]+j-i)
                {
                    mn=min(mn,ar[i]+ar[j]+j-i);
                }
            }
        }
      cout<<mn;
    }
   
    return 0;
}