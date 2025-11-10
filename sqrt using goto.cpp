#include<stdio.h>
#include<math.h>
int main()
{
	float n,s;
	bye:
    printf("enter a number");
    scanf("%f",&n);
    if(n<0)
    goto bye;
    s=sqrt(n);
    printf("square root is=%f",s);
    return 0;
}
