#include<bits/stdc++.h>
using namespace std;

void fun(stringstream& s)
{
    string word;
    if(s>>word)
    {
        
        cout<<word<<" ";
        fun(s);
    }
}
int main()
{   
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    // while(ss>>word)
    // {
    //     cout<<word;

    // }
    fun(ss);
    return 0;
}