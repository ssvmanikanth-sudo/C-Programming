#include<stdio.h>
int sum();
int main()
{
	int z;
	z=sum();
	printf("sum=%d",z);
	return 0;
}
int sum()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	return(a+b);
}
