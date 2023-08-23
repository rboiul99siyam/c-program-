#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string a;
    getline(cin,a);
    bool  inside_word = false;
    int cnt = 0;
    for(char c:a)
    {
        if(isalpha(c))
        {
            if(inside_word == false)
            {
                cnt++;
            }
            inside_word=true;
        }
        else
        {
           inside_word=false;
        }

    }
    cout<<cnt;
    return 0;
}