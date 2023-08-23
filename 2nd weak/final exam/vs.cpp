#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    bool cmp = false;
    while(ss>>word)
    {
        if(word=="Ratul")
        {
            cmp=true;
            break;
        }
    }
    if(cmp!=true)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
  
    return 0;
}
