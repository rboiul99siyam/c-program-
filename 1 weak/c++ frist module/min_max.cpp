#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   cout<<"Array minimum value range: "<<endl; 
   cin>>a;
   int ar[a];
   cout<<"Array minimum element :"<<endl;

   for(int i=0;i<a;i++)
   {
     cin>>ar[i];
   }
   int mm = ar[0];
    for(int i=0;i<a;i++)
   {
    
     if(ar[i]<mm)
     {
        mm=ar[i];
     }
   }
    cout<<mm;
 }