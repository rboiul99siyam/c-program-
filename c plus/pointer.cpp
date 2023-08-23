#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // int a,b,c;
    // cout<<"address of var1: "<<&a<<endl;
    // cout<<"address of var2: "<<&b<<endl;
    // cout<<"address of var3: "<<&c<<endl;
    // int * poinVar,var;
    // var = 5;
    // poinVar = &var;
    // cout<<"output :-->"<<*poinVar;
    // int *poinVar,var;
    // var = 5;
    // poinVar =&var;
    // cout<<"Var = "<<var<<endl;;
    // cout<<"Address of var (&var)="<<&var<<endl;

    // cout<<"PoinVar = "<<poinVar<<endl;
    // cout<<"Address of pointer (*pointer)="<<*poinVar<<endl;

    // int * poinVar,var;
    // var = 5;
    // poinVar =& var;
    // cout<<"var "<<var;
    // cout<<"pointer "<<*poinVar;
    int *poinVar;
    poinVar = new int;
    *poinVar= 45;
    cout<<*poinVar;
    delete poinVar;
    
    cout<<*poinVar<<endl;

    return 0;
}