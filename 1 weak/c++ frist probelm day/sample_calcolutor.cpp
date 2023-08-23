#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // input x y 
    long long int x , y;
    cin>>x>>y;

    // sumation x y
   long long  int sum = 0;
    sum = x + y;
    cout<<x<<" "<<"+"<<" "<<y<<" "<<"="<<" "<<sum<<endl;

    // multipulacation x y

   long long  int mul = 0;
    mul = x * y;
    cout<<x<<" "<<"*"<<" "<<y<<" "<<"="<<" "<<mul<<endl;


    // subtraction x  y
    int sub = 0;
    sub = x - y;
    cout<<x<<" "<<"-"<<" "<<y<<" "<<"="<<" "<<sub;


    return 0;
}