#include<stdio.h>
int x=10;
void display();
int main()
{
	printf("x=%d",x);
	display();
	return 0;
}
void display()
{
	printf("\nx=%d",x);
}
