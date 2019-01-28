#include "stdafx.h"
#include <stdio.h>
#include "math.h"

int stringLen(char *str);
int stringToInt(char *str);
char * intToString(int val, char *str);

void main()
{
	int iVal;
	char str[100];
	char string[] = "-12340987";

	iVal = stringToInt(string);

	printf("string: %s in integer form is %d \n\n", string, stringToInt(string));

	iVal = -469033;

	printf("integer: %d in string form is %s \n\n", iVal, intToString(iVal, str));
}

int stringToInt(char *str)
{
	int result = 0;
	int len = stringLen(str);

	// YOUR CODE HERE
	int i = 0;
	int j = 0;
	char temp;
	if (*str == '-')
	{
		j = 1;
	    
	}
	for (i = j; i < len; i++) {

		temp = *(str + i) - 48;
		result = result - temp *pow(10, len-i-1);
		

	}
	

	return result;
}

int stringLen(char *str)
{
	int i = 0;
	// YOUR CODE HERE
	while (*(str +i) != '\0')
	{
		i++;
	}
	


	return i;
}


char * intToString(int val, char * str)
{

	// YOUR CODE HERE
	sprintf(str, "%d", val);
	return str;

}