#include<bits/stdc++.h>
using namespace std;
int main()
{   

   
    
    int *ar=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>ar[i];
    }

    int *b =new int[7];
     for(int i=0;i<5;i++)
     {
        b[i]=ar[i];
     }
    b[5]=60;
    b[6]=70;

    for(int i=0;i<7;i++)
    {
        cout<<b[i]<<" ";
    }

   
    return 0;
}