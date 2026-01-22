#include<stdio.h>
int main()
{
	int a=10,*p;
	p=&a;
	printf("value of a=%d",a);
	printf("\nvalue of a=%d",*p);
	printf("\naddress of a=%u",p);
	printf("\naddress of p=%u",&p);
	return 0;
}
