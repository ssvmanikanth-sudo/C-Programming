#include<stdio.h>
int main()
{
	int x,y;
	float c,d;
	printf("enter x and y values");
	scanf("%d%d",&x,&y);
	c=x/y;
	printf("implicit value=%f",c);
	d=(float)x/y;
	printf("\nexplicit value=%f",d);
	return 0;
	
}
