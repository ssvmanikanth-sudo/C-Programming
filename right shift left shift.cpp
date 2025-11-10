#include<stdio.h>
int main()
{
	int x,y,right,left;
	printf("enter x value");
	scanf("%d",&x);
	printf("\nhow many bits are moving");
	scanf("%d",&y);
	right=x>>y;
	left=x<<y;
	printf("right shift=%d",right);
	printf("\nleft shift=%d",left);
	return 0;
}
