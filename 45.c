#include <stdio.h>
void main() 
{
   int a,b,c,k=0,temp,d;
   scanf("%d",&c);
   while(c)
   {
       c/=10;
       k++;
   }
    printf("%d",k);
   getch();
}
