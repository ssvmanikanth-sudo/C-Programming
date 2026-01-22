#include<stdio.h>
int product(int);
int main()
{
	int num,p;
	printf("enter a number ");
	scanf("%d",&num);
	p=product(num);
	printf("product of digits=%d",p);
	return 0;
}
int product(int n)
{
	int prod=1,d;
	while(n>0)
	{
		d=n%10;
		prod=prod*d;
		n=n/10;
	}
	return prod;
}
