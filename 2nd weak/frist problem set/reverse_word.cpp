#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a;
    getline(cin,a);

    stringstream ss(a);
    string word;
    
    while(ss>>word)
    {  
       cout<<" ";
       for(int i=word.size()-1;i>=0;i--)
       {
        cout<<word[i];
       }
    }
    return 0;
}
