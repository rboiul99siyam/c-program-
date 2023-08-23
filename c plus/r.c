#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int ar[a];
   for(int i=0;i<a;i++)
   {
    scanf("%d",&ar[i]);
   } 

   for(int i=0;i<a;i++)
   {
    if(ar[i]==0)
    {
        int j=0,k=i-1;
        while(j<k)
        {
            int tmp = ar[j];
            ar[j] = ar[k];
            ar[k] = tmp;
            j++;
            k--;
        }
    }
   }

   for(int i=0;i<a;i++)
   {
    printf("%d ",ar[i]);
   }
    return 0;
}