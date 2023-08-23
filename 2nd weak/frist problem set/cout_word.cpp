#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a;
    getline(cin,a);
    stringstream ss(a);
    string word;

    int counT = 0;
    
    while(ss>>word)
    {
        for(int i=0;i<word.size();i++)
        {
            if(word[i]=='!' ||word[i]==','||word[i]=='.'||word[i]=='?')
          {
            continue;
          }

          
          if(word[i]>='A' || word[i]<='Z')
          {
            counT++;
            break;
          
          }
          else if( word[i]>='a' || word[i]<='z')
          {
            counT++;
            break;
          }
          
          
        }
    }
    cout<<counT;
    return 0;
}