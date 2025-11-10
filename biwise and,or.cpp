#include<stdio.h>
int main()
{
	int x,y,a,b;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	a=x&y;
	b=x|y;
	printf("bitwise and=%d",a);
	printf("\nbitwise or=%d",b);
	return 0;
}
