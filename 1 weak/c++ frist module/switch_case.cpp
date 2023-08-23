#include<iostream>

using namespace std;
int main()
{
    int a;
    cout<<"Plase one to five positive value input now : "<<endl;
    cin>>a;
    switch(a)
    {
        case 1:
        cout<<"one";
        break;
        case 2:
        cout<<"two";
        break;
        case 3:
        cout<<"three";
        break;
        case 4:
        cout<<"four";
        break;
        case 5:
        cout<<"Five";
        break;
        default:
        cout<<"Din't match";
    }
}