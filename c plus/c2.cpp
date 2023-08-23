#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int *ptr1,*ptr2;
    ptr1 = (int *)malloc(5*sizeof(int));
    ptr2 = (int *)calloc(5,sizeof(int));
    if(ptr1==NULL && ptr2==NULL)
    {
        cout<<"Memory is not allocation"<<endl;
    }
    else
    {
        cout<<"Memory is successfully allcation"<<endl;
         realloc(ptr1,50);
        cout<<"Memory reallocation successfully"<<endl;
    }
    return 0;
}