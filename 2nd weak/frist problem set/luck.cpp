#include<bits/stdc++.h>
using namespace std;
int main()
{   
   int testcase;
   cin>>testcase;
   for(int i=0;i<testcase;i++)
   {
     string st;
    cin>>st;
    
     int fristSum = 0,secoundSum =0;
        
        
        fristSum = st[0]+st[1]+st[2]-'0'-'0'-'0';
        secoundSum =st[3]+st[4]+st[5]-'0'-'0'-'0';

     if(fristSum == secoundSum)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
    return 0;
}
