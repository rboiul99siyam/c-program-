#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    getline(cin,s);
    string x;
    cin>>x;
    int cnt =0;
   while(s.find(x)!=-1)
   {   cnt++;
       s.replace(s.find(x),x.size()," ");
   }
    cout<<cnt++;
    return 0;
}