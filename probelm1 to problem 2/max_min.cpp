#include<bits/stdc++.h>
using namespace std;
class parson
{  
    public:
   string name;
   int jersey_no;
};
int main()
{   
    parson ar[3];
    for(int i=0;i<3;i++)
    {
        getline(cin,ar[i].name);
        cin>>ar[i].jersey_no;
        cin.ignore();
    }
    
    parson mx;
    mx.jersey_no = INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(ar[i].jersey_no>mx.jersey_no)
        {
            mx = ar[i];
        }
    }
    cout<<mx.name<<" "<<mx.jersey_no<<" ";

    parson mn;
    mn.jersey_no = INT_MAX;
    for(int i=0;i<3;i++)
    {
        if(ar[i].jersey_no<mn.jersey_no)
        {
            mn = ar[i];
        }
    }

    cout<<mn.name<<" "<<mn.jersey_no<<" ";

    return 0;
}