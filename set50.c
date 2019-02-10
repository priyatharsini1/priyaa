#include<stdio.h>
#include<conio.h>
void main()
{
int n,x=1,pow=2,i;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
x=x*pow;
if(x==n)
{
printf("yes");
}
}
if(x!=n)
{
printf("no");
}
getch();
}
