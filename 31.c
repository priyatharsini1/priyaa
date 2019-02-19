#include <stdio.h>

void main() 
{
   char a[100],b;
   int c,des=0,i;
   gets(a);
   i=0;
   while(a[i]!='\0')
   {
       if(a[i]==' ')
       {
           
       }
       else
       {
           des+=1;
       }
       i++;
   }
      printf("%d",des); 
   getch();
   
}
