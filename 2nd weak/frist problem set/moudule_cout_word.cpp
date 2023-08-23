#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a;
    getline(cin,a);

    bool inside_true = false;
    int cnt = 0;
    for(char c:a)
    {
       if(isalpha(c)){
        if(inside_true == false)
        {
            cnt++;
        }
        inside_true=true;
       }
       else
       {
        inside_true = false;
       }
    }
    cout<<cnt;
    return 0;
}