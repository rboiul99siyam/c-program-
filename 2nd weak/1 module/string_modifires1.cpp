#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a = "hello";
    string b = "world";
    // a=a+=b;
    // cout<<a<<endl;
    // a.append(b);
    // cout<<a;
    // a =a+"A";
    // b = "A";
    // a = a+b;
     a.push_back('A');
    a.pop_back();
    a.pop_back();
    a.pop_back();
    cout<<a;
    return 0;
}