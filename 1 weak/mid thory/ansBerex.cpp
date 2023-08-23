#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int * p;
    float * v;
    p  = new int;
    
    v = new float;

    *p = 45;
    *v =45.43;
    cout<<*p<<endl;
    cout<<*v<<endl;

    delete p;
    delete v;
    return 0;
}