#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],i,j,r,c;
	printf("enter row and column sizes");
	scanf("%d%d",&r,&c);
	printf("enter a matrix values");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter b matrix values");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&B[i][j]);
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	printf("result matrix\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",C[i][j]);
		}
		printf("\n");
			}
			return 0;
			}
