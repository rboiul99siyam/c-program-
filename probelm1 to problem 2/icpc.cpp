#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a;
        cin>>a;
        string s;
        cin>>s;
        int fr[26] = {0};
         int cnt = 0;
        for(int i=0;i<a;i++)
        {
            int b = s[i]-'A';
            if(fr[b]==0)
            {
                cnt+=2;
                fr[b]++;
            }
            else
            {
                cnt+=1;
                fr[b]++;
            }
        }
        cout<<cnt;
    
    }
    return 0;
}