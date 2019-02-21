#include<stdio.h>
void main()
{
	int n,p,sum=0;
	printf("Enter the Number:");
	scanf("  %d",&n);
	while(n!=0)
	{
		p=n%10;
		p=p*p;
		sum=sum+p;
		n=n/10;
	}
	printf("\n  The Sum of Square of Digits is %d",sum);
}
