#include<bits/stdc++.h>
using namespace std;
int main()
{   
    //declar a pointer
    int  * pointVar;
    // declar a pointer 
    float * pointFloat;

    // dynamically allocation memory 

    pointVar = new int;
    
    pointFloat = new float;
    
    *pointVar = 45;
    *pointFloat = 45.67;

    //cout
    cout<<*pointVar<<endl;
    cout<<*pointFloat<<endl;

    // deallocation memory 
    delete pointVar;
    delete pointFloat;



    return 0;
}