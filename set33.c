#include<stdio.h>
#include<conio.h>
void main()
{
char a[20];
int i,count=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
count++;
}
}
printf("  %d",count);
getch();
}
