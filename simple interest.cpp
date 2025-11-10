#include<stdio.h>
int main()
{
	float p,t,r,mul,si;
	printf("enter p,t,r values");
	scanf("%f%f%f",&p,&t,&r);
	mul=p*t*r;
	si=mul/100;
	printf("simple interest=%f",si);
	return 0;
}
