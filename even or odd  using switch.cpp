#include<stdio.h>
int main()
{
	int x;
	mani:
	printf("enter a number");
	scanf("%d",&x);
	if(x<0)
	goto mani;
	switch(x%2==0)
	{
		case 1:printf("it is even");
		break;
		case 0:printf("it is odd");
		break;
	}return 0;
	
}
