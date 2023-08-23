#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int cls;
    char section;
    int id;
};

int main()
{   
    int n;
    cin>>n;
    student ar[n];
    cin.ignore();
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].name>>ar[i].cls>>ar[i].section>>ar[i].id;
    }

//    for(int i=0;i<n-1;i++)
//    {
//     for(int j=i+1;j<n;j++)
//     {
//         if(ar[i].id==ar[j].id)
//         {
//             swap(ar[i].id,ar[j].id);
//         }
//     }
//    }
    // reverse(ar->id,ar->id+n); 

    int i=0,j=n-1;
    while(i<j)
    {
        swap(ar[i].id,ar[j].id);
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].section<<" "<<ar[i].id<<endl;
    }
    return 0;
}