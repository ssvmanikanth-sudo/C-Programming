#include<stdio.h>
int sum(int);
int main()
{
	int num,s;
	printf("enter a number ");
	scanf("%d",&num);
	s=sum(num);
	printf("sum of digits=%d",s);
	return 0;
}
int sum(int n)
{
	int sum=0,d;
	while(n>0)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	return sum;
}
