#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   for(int i=0;i<a;i++)
   {
    int k;
    scanf("%d",&k);
    int ar[k];
    for(int j=0;j<k;j++)
    {
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<k;j++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");

   } 
    return 0;
}