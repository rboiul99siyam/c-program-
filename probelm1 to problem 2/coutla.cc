#include<bits/stdc++.h>
using namespace std;
int main()
{   

    int a;
    cin>>a;
    int fq[26]={0};
    for(int i=0;i<a;i++)
    {
        char n;
        cin>>n;
        fq[n-'a']++;
    }
    for(char i='a';i<='z';i++)
    {
        if(fq[i-'a']>0)
        {
            for(int j=0;j<fq[i-'a'];j++)
            {
                cout<<i;
            }
        }
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n; 
//     cin>>n;
//     int frq[26]={0};
//     for(int i=0;i<n;i++)
//     {
//         char a;
//         cin>>a;
//         frq[a-'a']++;
//     }
//     for(char i='a';i<='z';i++)
//     {
//         if(frq[i-'a'] > 0)
//         {
//             for(int j=0;j<frq[i-'a'];j++)
//             {
//                 cout<<i;
//             }
//         }
//     }
//     return 0;
// }