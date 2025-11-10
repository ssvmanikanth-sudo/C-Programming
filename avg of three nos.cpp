#include<stdio.h>
int main()
{
	float a,b,c,tot,avg;
	printf("enter a,b,c values");
	scanf("%f%f%f",&a,&b,&c);
	tot=a+b+c;
	avg=tot/3;
	printf("average=%f",avg);
	return 0;

}
