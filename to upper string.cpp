#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	printf("string name");
	gets(s);
	printf("upper case string= %s",strupr(s));
	return 0;
}
