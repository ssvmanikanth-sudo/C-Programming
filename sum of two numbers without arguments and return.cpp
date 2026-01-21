#include<stdio.h>
void sum();
int main()
{
	sum();
	return 0;
}
void sum()
{
	int a,b;
	printf("enter a,b values");
	scanf("%d%d",&a,&b);
	printf("sum=%d",a+b);
}
