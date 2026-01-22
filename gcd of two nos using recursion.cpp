#include<stdio.h>
#include<math.h>
int gcd(int,int);
int main()
{
	int n1,n2,g;
	printf("enter two numbers ");
	scanf("%d %d",&n1,&n2);
	g=gcd(n1,n2);
	printf("GCD=%d",g);
	return 0;
}
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else
	return (gcd(b,a%b));
}
