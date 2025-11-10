#include<stdio.h>
int main()
{
	int a,b,c,d,e,tot;
float avg;
printf("enter five subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
tot=a+b+c+d+e;
avg=tot/3;
printf("total marks=%d",tot);
printf("\naverage=%f",avg);
return 0;	
}
