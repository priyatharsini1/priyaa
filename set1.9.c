#include<stdio.h>
int main()
{
    int i,k,n,sum=0,a[10];
    scanf("%d%d",&k,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {

        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
    
}
