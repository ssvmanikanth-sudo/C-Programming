#include<stdio.h>
int main()
{
	int a=10,*p,**q;
	p=&a;
	q=&p;
	printf("value of a=%d",a);
	printf("\nvalue of a=%d",*p);
	printf("\nvalue of a=%d",**q);
	return 0;
}
