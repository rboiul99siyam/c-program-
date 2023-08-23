#include<bits/stdc++.h>
using namespace std;
int fun(int *ar,int a)
{
    int sum =0;
    for(int i=0;i<a;i++)
    {
        sum = sum + ar[i];
    }
 return sum;
}
int main()
{   int a;
    cin>>a;
    int ar[a];
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
  int as= fun(ar,a);
  cout<<as;
    return 0;
}