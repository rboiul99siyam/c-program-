#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // n size er input nite hobe 
    int n;
    cin>>n;
    // a er array input nite hobe 
    int *ar= new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    } 
    // m size er input nite hobe 
    int m;
    cin>>m;
    // b er array copy korte  hobe 
    int *br = new int [m];
    for(int i=0;i<n;i++)
    {
        br[i]=ar[i];
    }

    delete[] ar;

    // b er array input nite hobe

    for(int i=n;i<m;i++)
    {
        cin>>br[i];
    }
    
    // tarpor b array ke amader print korte hobe 

    for(int i=0;i<m;i++)
    {
        cout<<br[i]<<" ";
    }

    return 0;
}