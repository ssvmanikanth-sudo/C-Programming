#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
	int a,b,sum;
	if(argc<3)
	{
		printf("pass the two values");
		return 0;
	}
	a=atoi(argv[1]);//string to integer
	b=atoi(argv[2]);
	sum=a+b;
	printf("sum=%d",sum);
	return 0;
}
