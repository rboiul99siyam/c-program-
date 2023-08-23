#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // input nite hobe 
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }

    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]==ar[j])
            {
                int tmp = ar[i];
                ar[i] = ar[j];
                ar[j] =tmp;

            }
        }
    }

    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]==ar[j])
            {
                ar[i]%10;
                ar[j]/10;
            }
        }
    }
    for(int i=0;i<a/2;i++)
    {
        if(ar[i] != ar[a-i-1])
        {
            cout<<"NO";
            return 0;
        }
        
    }
    cout<<"Yes"<<endl;
    return 0;
}