#include "stdafx.h"
#include <stdio.h>

void main()
{
	int i = 0;
	int len;

	int array[] = { 65,116,32,50,48,32,68,101,103,114,101,101,115,44,32,84,104,101,32,87,101,97,116,104,101,114,32,73,115,32,71,114,101,97,116,46 };

	i = 0;
	do
	{
		printf("%c", array[i]);
		i++;
	} while (array[i] != 46);
	printf("\n\n");

	i = 0;
	do
	{
		if (array[i] >= 97 && array[i] <= 122) {
			array[i] = array[i] - 32;
		}
		printf("%c", array[i]);
		i++;
	} while (array[i] != 46);
	printf("\n\n"); //all caps

	i = 0;
	do
	{
		if (array[i] >= 65 && array[i] <= 90) {
			array[i] = array[i] + 32;
		}
			printf("%c", array[i]);
			i++;
		} while (array[i] != 46);
		printf("\n\n"); // all non caps

}

