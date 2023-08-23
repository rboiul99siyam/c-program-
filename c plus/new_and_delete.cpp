#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int num;
    cout<<"Enter total student cgpa : "<<endl;
    cin>>num;

    float *ptr = new float[num];
    cout<<"Enter GPA of student : "<<endl;
    
    for(int i=0;i<num;i++)
    {
       cout<<"Student "<<(i+1)<<endl;
       cin>>*(ptr+i);
    }
    cout << "\nDisplaying GPA of students." << endl;
    for(int i=0;i<num;i++)
    {
        cout<<"Student "<<(i+1)<<": "<<*(ptr+i)<<endl;
    }
    return 0;
}