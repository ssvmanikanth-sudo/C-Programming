#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int x;
	printf("enter string 1 name");
	gets(s1);
	printf("enter string 2 name");
	gets(s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("both are equal");
	else
printf("both are not equal");
return  0;
}
