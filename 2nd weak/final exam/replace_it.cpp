#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        string x;
        cin>>s>>x;
        int y = x.size();
        while(s.find(x)!=-1)
        {
            s.replace(s.find(x),y,"$");
        }
        cout<<s<<endl;
    }
    return 0;
}