#include<stdio.h>
int main()
{
	int n,i=1,f=1;
	printf("enter a number to print its factorial");
	scanf("%d",&n);
	while(i<=n)
	{
	f=f*i;
	i++;
	printf("factorial is=%d",f);
	}return 0;
}
