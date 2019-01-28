#include "stdafx.h"
#include "stdio.h"


void main()
{
	int English = 0;
	int Construction = 0;
	int Engineering = 0;
	int Dcg = 0;
	int Maths = 0;
	float average = 0.0 ;

	printf("Enter English grade: ");
	scanf_s("%d", &English);
		
	printf("Enter Construction grade: ");
	scanf_s("%d", &Construction);

	printf("Enter Engineering grade: ");
	scanf_s("%d", &Engineering);

	printf("Enter Dcg grade: ");
	scanf_s("%d", &Dcg);

	printf("Enter Maths grade: ");
	scanf_s("%d", &Maths);

	puts("\n");

	average = (float)(English + Construction + Engineering + Dcg + Maths) / 5;

	printf(" Your average marks is: %.2f ", average);

	printf("\n You passed:");
	if (English >= 40) { printf("Englsih,"); }
	if (Construction >= 40) { printf("Consruction,"); }
	if (Engineering >= 40) { printf("Engineering,"); }
	if (Dcg >= 40) { printf("Dcg,"); }
	if (Maths >= 40) { printf("Maths."); }

	printf("\n You failed:");
	if (English < 40) { printf("Englsih,"); }
	if (Construction < 40) { printf("Consruction,"); }
	if (Engineering < 40) { printf("Engineering,"); }
	if (Dcg < 40) { printf("Dcg,"); }
	if (Maths < 40) { printf("Maths."); }


}

