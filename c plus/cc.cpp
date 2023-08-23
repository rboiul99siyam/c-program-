#include<bits/stdc++.h>
using namespace std;
int main()
{     int T;
    cin>>T;
    for (int test = 0; test < T; test++)
    {
        int N;
        cin>>N;
        int *Ar = new int[N];
        for (int i = 0; i < N; i++)
        {
          cin>>Ar[i];
        }
        int min = INT_MAX;
        for (int i = 0; i < N-1; i++)
        {
           for (int j = i+1; j < N; j++)
           {
             int val = Ar[i]+Ar[j]+j-i;
             if (val<min)
             {
              min = val;
             }
           }
        }
        cout<<min<<endl;
    }
    return 0;
}