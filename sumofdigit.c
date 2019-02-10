#include<stdio.h>
#include<conio.h>
void main()
{
int n,r1,sum=0,temp1=0,r2,temp2=0;
clrscr();
printf("enter the number:");
scanf("%d",&n);
temp1=n;
while(n>0)
{
r1=n%10;
sum=sum+r1;
n/=10;
}
printf("values are:%d=%d",temp1,sum);
while(sum!=0)
{
r2=sum%10;
temp2=temp2+r2;
sum/=10;
}
printf("\nvalues are:%d",temp2);
getch();
}
