#include<stdio.h>
int main()
{
int n,k,a[10],j,x;
scanf("%d%d",&n,&k);
for(j=0;j<n;j++)
{
scanf("%d",&a[j]);
}
for(int j=0;j<=k;j++)
{
x=a[j];
a[j]=a[j+1];
a[j+1]=x;
}

for(j=0;j<n;j++)
{
printf("%d ",a[j]);
}
return 0;
}
