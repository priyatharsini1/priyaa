#include <stdio.h>
#include<string.h>
int main(void)
{
	char str1[50];
	scanf("%s ",str1);
	strcat(str1,".");
	printf(" %s",str1);
	return 0;
}
