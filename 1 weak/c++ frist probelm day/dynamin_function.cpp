#include<bits/stdc++.h>
using namespace std;

int * get_array(int a)
{
  int *ar=new int[a];
  for(int i=0;i<a;i++)
  {
    cin>>ar[i];
  }
  return ar;
}
int main()
{   
    // n size input nilam 
    int n;
    cin>>n;
    // then array argoment diye dilam end  pointer array recive korlam 
   int *a= get_array(n);

   // loop diye pointer array print korlalm
   for(int i=0;i<n;i++)
   {
    cout<<a[i]<<" ";
   }
  delete[]a;
 

    return 0;
}