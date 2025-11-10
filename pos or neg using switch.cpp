#include<stdio.h>
int main()
{
	int x;
	printf("enter a  number");
	scanf("%d",&x);
	switch(x>0)
	{
		case 1:printf("it is positive");
		break;
		case 0:printf("it is negative");
		break;
	}return 0;
}
