#include<stdio.h>
int main()
{
	int x=7;
	char ch='a';
	void *p; //void pointer
	p=&x;
	printf("value of x=%d",*(int*)p); //type casting
	p=&ch;
	printf("\nvalue of ch=%c",*(char*)p);
	return 0;
}
