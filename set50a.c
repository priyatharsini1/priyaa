#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=0;
clrscr();
scanf("%d",&n);
while(n%2!=0)
{
    if(n%2==0)
    {
        f=1;
        break;
    }
}
 if(f==1)
 {
     printf("yes");
 }
 else
 {
     printf("no");
 }
getch();
}
