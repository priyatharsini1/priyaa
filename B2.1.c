#include<stdio.h>
void main()
{
    char a[100];
    scanf("%s",&a);
    if(a[0]=='S'||a[0]=='s')
    {
        printf("holiday");
    }
    else
    {
        printf("not holiday");
    }
    return 0;
}
