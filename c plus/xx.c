#include<stdio.h>
int main(){
   int a;
   scanf("%d",&a);
   int md=a/2;
   for(int i=0;i<a;i++)
   {
      for(int j=0;j<a;j++)
      {
         if(i==md)
         {
            printf("#");
         }
         else if(j==md)
         {
            printf("#");
         }
         else{
            printf("*");
         }
      }
      printf("\n");
   } 
    return 0;
}