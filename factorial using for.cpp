#include<stdio.h>
int main()
{
long int i,n,f=1;
	printf("enter a number to print its factorial");
	scanf("%ld",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}printf("factorial is=%ld",f);
	return 0;
}
