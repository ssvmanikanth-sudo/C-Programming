#include<stdio.h>
int main()
{
	int x=10;
	char ch='A';
	float pi=3.14;
	double p=12345.0679;
	long int q=6553523;
	printf("x=%d",x);
	printf("\nchar=%c",ch);
	printf("\npi=%f",pi);
	printf("\np=%lf",p);
	printf("\nlong int=%ld",q);
	printf("\naddress of x=%u",&x);
	return 0;
}
