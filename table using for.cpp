#include<stdio.h>
int main()
{
	int tn,ts,i;
	printf("enter table number");
	scanf("%d",&tn);
	printf("\nenter table size");
	scanf("%d",&ts);
	for(i=1;i<=ts;i++)
	{
		printf("%d*%d=%d\n",tn,i,tn*i);
	}return 0;
}
