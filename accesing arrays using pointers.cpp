#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={10,20,30,40,50},i,*p;
	p=a;       //or p=&a[0]
	printf("display array values ");
	for(i=0;i<5;i++)
	{
		printf("%d ",*p);
		p++;
	}
	return 0;
}
