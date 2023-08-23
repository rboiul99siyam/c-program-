#include<bits/stdc++.h>
using namespace std;
int my_fun(int *a,int *b)
{
    int sum = 0;
    sum = *a + *b;
    return sum;
}
int main()
{   int a,b;
    cin>>a>>b;
    int sum = my_fun(&a,&b);
    cout<<"sumation result two value : "<<sum;
    return 0;
}