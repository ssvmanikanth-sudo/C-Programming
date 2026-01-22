#include<stdio.h>
int main()
{
	int a=10;
	int *p=NULL;
	if(p==NULL)
	p=&a;
	printf("value of a=%d",*p);
	return 0;
}
