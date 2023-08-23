#include<stdio.h>
int main()
{
   int x;
   scanf("%d",&x);
   for(int l=0;l<x;l++)
   {
    int a[100], n, element;
   int i;
   scanf("%d", &n);

  
   for(i=0; i<n; i++)scanf("%d", &a[i]);
   scanf("%d",&element);

   for(i=0; i<n; i++)
   {
     if(a[i]==element)
     {
       printf("case%d: %d", element, i+1);
       return 0;
     }
   }

   printf("%d not found.", element);
   }
   return 0;
}