#include "stdafx.h"
# include "stdio.h"

#define Triangle 1
#define Rectangle 2
#define Square  3
#define Trapezium 4
#define Circle 5
#define Parallelogram 6
#define Ellipse 7
#define Sector 8
#define PI 3.14


int main()
{
	int Option = 0;
	float base;
	float height;
	float area;
	float radius;
	float topbase;
	float widht;
	float radius2;
	float angle;
	int yesno;
	int test;

	do {

		printf("\n Area Calculator");
		printf("\n 1:Triangle");
		printf("\n 2:Rectangle");
		printf("\n 3:Square");
		printf("\n 4:Trapezium");
		printf("\n 5:Circle");
		printf("\n 6:Parallelogrma");
		printf("\n 7:Ellipse");
		printf("\n 8:Sector");

		printf("\n Enter Option:");
		scanf_s("%d", &Option);

		switch (Option) {

		case 1:
			printf("Enter vertical height:");
			scanf_s("%f", &height);
			printf("Eter base:");
			scanf_s("%f", &base);
			area = 0.5*base*height;
			printf("Area: %.2f", area);
			break;

		case 2:
			printf("Enter height:");
			scanf_s("%f", &height);
			printf("Eter widht:");
			scanf_s("%f", &widht);
			area = height*widht;
			printf("Area: %.2f", area);
			break;

		case 3:
			printf("Eter base:");
			scanf_s("%f", &base);
			area = base*base;
			printf("Area: %.2f", area);
			break;

		case 4:

			printf("Eter base:");
			scanf_s("%f", &base);
			printf("Enter top base:");
			scanf_s("%f", &topbase);
			area = 0.5*(base*topbase)*height;
			printf("Area: %.2f", area);
			break;

		case 5:
			printf("Eter radius:");
			scanf("%f", &radius);
			area = PI*(radius*radius);
			printf("Area: %.2f", area);
			break;

		case 6:
			printf("Enter height:");
			scanf_s("%f", &height);
			printf("Eter base:");
			scanf_s("%f", &base);
			area = base*height;
			printf("Area: %.2f", area);
			break;


		case 7:
			printf("Eter radius:");
			scanf("%f", &radius);
			printf("Enter second radius:");
			scanf_s("%f", &radius2);
			area = PI*(radius*radius2);
			printf("Area: %.2f", area);
			break;

		case 8:
			printf("Eter radius:");
			scanf("%f", &radius);
			printf("Enter angle");
			scanf_s("%f", &angle);
			area = 0.5*(radius*radius)*angle;
			printf("Area: %.2f", area);
			break;
		}
	
	
		printf("\n\nAnother calculation? (1=yes 2=no):");
		scanf_s("%d", &yesno);
		if (yesno == 1) { test = 1;
		}
		else { test = 2; }

	} while (test == 1)  ;

}



