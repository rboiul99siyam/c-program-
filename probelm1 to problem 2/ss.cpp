#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a;
    getline(cin,a);
    // sort(a.begin(),a.end());
    // cout<<a;


    for(int i=0;i<a.size()-1;i++)
    {
        for(int j=i+1;j<a.size();j++)
        {
            if(a[i]>a[j])
            {
                int tmp =a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
    return 0;
}