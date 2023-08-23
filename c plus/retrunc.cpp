#include<bits/stdc++.h>
using namespace std;
int* fun()
{
    int *a= new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()
{   
    int *a=fun();
    
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }

    delete[] a;
     for(int i=0;i<5;i++)
    {
        cout<<"bahi ami kaoke khuje pai na "<<a[i];
    }
    return 0;
}