#include "stdio.h"
#include "string.h"
FILE *openFile(char *fileName, char *mode);
void closeFile(FILE *fptr);
void readData(FILE *fptr, char userinput[]);


int main () {
	FILE*fptr;
		char userinput[40];	
	 char filename[] = "C:\\Users\\User\\Desktop\\week 14.txt";
	
//		fptr = openFile(filename,"r");
	
		printf("Enter product Name <or returnt to quit>:");
		gets( userinput );
		
		if(strlen(userinput) != 0){
		
	
		
		//printf("End of Processing!", userinput);
		while(strlen(userinput)>1){
		fptr = openFile(filename,"r");
		readData(fptr,  userinput);
		strcpy(userinput,"");
				printf("Enter product Name <or returnt to quit>:");
		scanf("%s", userinput );
		closeFile(fptr);
		}
		printf("End of Processing!", userinput);
			
		
	readData(fptr, userinput);
}
	else{
		printf("stop");
			return 0;
	}

	closeFile(fptr);

	printf("\n\n");
	
		
}
void readData(FILE *fptr, char userinput[]){
	char Region[80], Rep[80], Item[80], OrderDate[80], firstline[80];
	int Units; 
	float UnitCost, Total;
	float totalCost = 0;
	
	fgets(firstline, 80, fptr);
	//puts(firstline);
	//puts(userinput);
	while (!feof(fptr)){
	
	fscanf(fptr, "%s\t%s\t%s\t%s\t%d\t%f\t%f", OrderDate, Region, Rep, Item, &Units, &UnitCost, &Total);
	if (strcmp(userinput, Item) == 0){
		totalCost += Total;
	}

	//printf("%s\t%s\t%s\t%s\t%d\t%.2f\t%.2f\n", OrderDate, Region, Rep, Item, Units, UnitCost, Total);
	
	}
	printf("Total Cost of %s: %.2f\n", userinput, totalCost);
	
		
}


FILE * openFile(char *filename, char *mode){
		FILE *fptr = fopen(filename, mode);

	if (fptr == NULL)
	{
		printf("Error opening file ! \n");
	}

	return fptr;
	
}
void closeFile(FILE *fptr)
{
	fclose(fptr);
}
