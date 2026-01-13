#include<string.h>
#include<stdio.h>
int main()
{
	char s[20];
	printf("enter string name ");
	gets(s);
	printf("reverse string %s",strrev(s));
	return 0;
}
