#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    int *ar=new int[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
     sort(ar,ar+a);
    for(int i=0;i<a;i++)
    {
       cout<<ar[i]<<" ";
    }
    return 0;
}