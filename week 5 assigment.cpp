#include "stdafx.h"
#include "stdio.h"

void main()
{
	int counter;
	double sum = 0.0 ;
	double number;
	double average = 0.0;
	double max = 0.0;
	double min = 0.0;

	printf("Program to calculate average, min and max of up to 10 floating pint numbers ");
	printf("Enter up to 10 numbers <0.0 to end input>");

	for (counter = 0.0; counter < 10; counter++) {
		printf("\n Enter #%d:", counter + 1);
		scanf_s("%lf", &number);
		
		if (counter == 0) {
			max = number;
			min = number;

			if (number == 0) {
				printf("First number is invalid \n ");
				break;
			}
		}
		if (number > max ) {
			max = number;
		}

		if (number < min &&number !=0) {
			min = number;
		}

		sum = sum + number;


		if (number == 0) {
			average = sum /counter;
			printf("Average= %.2lf, max= %.2lf, min= %.2lf\n", average,max,min);
			break;
		}
		if (counter == 9) {

			average = sum / counter;
			printf("Average= %.2lf, max= %.2lf, min= %.2lf\n", average,max,min);
		}
	}

}

