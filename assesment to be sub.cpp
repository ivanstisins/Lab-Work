#include"stdafx.h"
#include "stdio.h"
	
void main()
{
	int hours = 0;
	float rate = 15.45;
	float pay = 0.0;
	float overtimeRate = 1.50;

	printf("Enter hours worked: ");
	scanf_s("%d", &hours);
	pay = hours*rate;

	if ("hours <= 40")
	{
		pay = hours*rate;
	
	}

	else 
	
	{
		pay = 40 *rate + (hours - 40)*overtimeRate;

	}

	 
	printf("Your worked %d hours, and earned %.2f \n", hours , pay);









	}