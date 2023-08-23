#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // string a="Hello_world";
    // cout<<a[0]<<endl;
    // cout<<a.back()<<endl;
    // cout<<a.at(0)<<endl;
    // cout<<a.front()<<endl;
    // string a="hello";
    // string b = "world";
    // a = a+b;
    // a.append(b);
    
    // a.push_back('A');
    // a.pop_back();
    // a.pop_back();
    // cout<<a;

    // string a = "hello__world";
    // // a.erase(4,1)<<endl;
    // // a.replace(4,1,"so");
    // a.insert(6,"ROBIUL");
    // cout<<a;
    // string a="hello_world";
    // cin>>a;
    // string::iterator it;

    // for(auto it=a.begin();it<a.end();it++)
    // {
    //     cout<<*it<<endl;
    // }
//    for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i]<<endl;
//     }
//     cout<<*a.begin();
//     cout<<*(a.end()-1);

string a;
getline(cin,a);
stringstream ss;
ss<<a;
string world;
while(ss>>world)
 
    cout<<world<<" ";
     return 0;
}