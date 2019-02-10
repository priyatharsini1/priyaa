#include<stdio.h>
#include<conio.h>
void main()
{
int a[3]={2,3,4};
int i,sum=0,n=3;
clrscr();
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
getch();
}
