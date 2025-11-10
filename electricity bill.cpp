#include<stdio.h>
int main()
{
	int units;
	float amount,charge,totalamount;
	printf("no. of units consumed");
	scanf("%d",&units);
	if(units<=100)
	{
		amount=units*1.5;
		charge=25;
	}
	else if(units<=200)
	{
	amount=units*2.5;
	charge=50;	
	}
	else if(units<=300)
	{
	amount=units*3.5;
	charge=75;	
	}
	else if(units<=400)
	{
		amount=units*4.5;
		charge=100;
	}
	else 
	{
		amount=units*5;
		charge=150;
	}
	totalamount=amount+charge;
	printf("electricity bill=%.2f",totalamount);
	return 0;
}
