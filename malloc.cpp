#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,*ptr;
	printf("enter size ");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter integer values ");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	return 0;
}
