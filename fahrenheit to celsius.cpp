#include<stdio.h>
int main()
{
	float f,x,c;
	printf("enter fahrenheit value");
	scanf("%f",&f);
	x=f-32;
	c=x/1.8;
	printf("celsius value=%f",c);
	return 0;
}
