#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }

     int flag = 1;
    // int i=0,j=i+1;
    // while(i<j)
    // {
    //     if(ar[i] != ar[j])
    //     {
    //         flag = 0;
    //     }
    //     i++;
    //     j--;
    // }
    // if(flag==1)
    // {
    //     cout<<"YEs";
    // }
    // else{
    //     cout<<"NO";
    // }
    for(int i=0;i<a-1;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(ar[i]!=ar[j])
            {
                flag = 0;
            }
        }
    }

    if(flag==1)
    {
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    return 0;
}