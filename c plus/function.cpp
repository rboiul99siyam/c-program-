#include<bits/stdc++.h>
using namespace std;

int fun(int *p,int *a)
{
    int sum =0;
    sum = *p + *a;
    return sum;
}
int main()
{   
   int a,b;
   cin>>a>>b;
   int save = fun(&a,&b);
   cout<<"samtion :"<<save; 
    return 0;
}