#include <stdio.h>

int main(void) {
	int n,i,j,t,median;
	long int a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 scanf("%ld",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
       {
       	 if(a[j]<=a[j+1])
       	 {
       	   t=a[j];
       	   a[j]=a[j+1];
       	   a[j+1]=t;
       	 }
       }
	}
	if ( n % 2 == 0)                                        
          median = (a[n/2] + a[n/2+1])/2.0 ;                   
       else                                                    
          median = a[n/2 + 1];    
          printf("  %d",median);
	return 0;
}
