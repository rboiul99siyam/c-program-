#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // a input 
    int a;
    cin>>a;
    // array 
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]>ar[j])
            {
              swap(ar[i],ar[j]); 
            }
        }
    }
    for(int i=0;i<a;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}