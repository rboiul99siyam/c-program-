#include<bits/stdc++.h>
using namespace std;
int main()
{   
    // string a;
    // cin>> a;
    // cout<<a.size(); ->size of()
    // cout<<a.max_size(); -> max_sizeof()
    // cout<<a.size()<<endl;
    // cout<<a.capacity(); ->capacity of string 
    // string a = "Hello_shonar_bangla";
    // cout<<a<<endl;
    // a.clear();
    // cout<<a<<endl;

    // string a="hello_world";
    // // a.clear();
    // if(a.empty()==true){
    //     cout<<"Kicui nai bahi ";
    // }
    // else{
    //     cout<<"kichu ache bahi ";
    // }

    string a;
    cin>>a;
    // a.resize(5);
    // cout<<a<<endl;
    a.resize(20,'X');
    cout<<a;
    
    return 0;
}