#include<bits/stdc++.h>
using namespace std;
int main()
{   
    
    //VALUE RANGE INPUT HERE
    cout<<"ENTER YOUR VAUE RANGE :";
    int n;
    cin>>n;
    //ARRAY ER VALUE INPUT NILAM HERE
    int ar[n];
    cout<<"ENTER YOUR ARRAY INPUT NOW :";
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    //SORTING PART START HERE 
   
   // EKHANE AMORA ASSENDING VALUE CIN KORBO

   sort(ar,ar+n,greater<int>());
    

    // VLAUE PIRNT KORALM EKHANE 
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    
    
    return 0;
}