#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void getName(char emp[]);
int getID(char emp[]);
double getHours(char emp[]);

char firstName[40];
char surname[40];
int ID;
double hours[5];

void main()
{
	char emp1[] = "Smith,Fred,2214,,5,7,8.5,10.0";
	char emp2[] = "Murphy,Sarah,1579,8.5,5,5,8,8";

	getName(emp1);
	getID(emp1);
	getHours(emp1);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

	puts("");

	getName(emp2);
	getID(emp2);
	getHours(emp2);
	printf("Employee %s %s, ID: %d, worked the following hours:\n", firstName, surname, ID);
	printf("Monday:%.2lf Tuesday:%.2lf Wednesday:%.2lf Thursday:%.2lf Friday:%.2lf \n", hours[0], hours[1], hours[2], hours[3], hours[4]);

}


void getName(char emp[])
{
	int pos = 0, foundcomma = 0, i = 0;
	for (i = 0; i < 40; i++) {
		if (!foundcomma) {
			if (emp[i] > 64 && emp[i] < 91) {
				surname[pos] = emp[i];
				pos++;
			}
			else if (emp[i] > 96 && emp[i] < 123) {
				surname[pos] = emp[i];
				pos++;
			}
			else if (foundcomma > 0) {
				if (emp[i] > 64 && emp[i] < 91) {
					surname[pos] = emp[i];
					pos++;
				}
				else if (emp[i] > 96 && emp[i] < 123) {
					surname[pos] = emp[i];
					pos++;
				}
				if (emp[i] == 44) {
					if (foundcomma == 1) break;
					foundcomma = 1;
					pos = 0;
				}

			}
		}
	}

}

int getID(char emp[])
{
	// your code goes here
	int i = 0;
	int j = 0;
	int k = 0;
	char tempID[40];

	do {
		i++;
	} while (emp[i] != ',');
	j = i;
	do {
		j++;
	} while (emp[j] != ',');
	k = j;
	do {
		k++;
	} while (emp[k] != ',');
	strncpy(tempID, &emp[j + 1], k - 1);
	ID = atoi(tempID);

	return ID;
}

double getHours(char emp[])
{
	int totalHours = 0;
	// your code goes here
	int i = 0;
	int j = 0;
	int k = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;

	char tempID[40];

	do {
		i++;
	} while (emp[i] != ',');
	j = i;
	do {
		j++;
	} while (emp[j] != ',');
	k = j;
	do {
		k++;
	} while (emp[k] != ',');
	a = k;
	do {
		a++;
	} while (emp[a] != ',');
	strncpy(tempID, &emp[k + 1], a - 1);
	hours[0] = atof(tempID);
	b = a;
	do {
		b++;
	} while (emp[b] != ',');
	strncpy(tempID, &emp [a + 1], b - 1);
	hours[1] = atof(tempID);
	c = b;
	do {
		c++;
	} while (emp[c] != ',');
	strncpy(tempID, &emp[b + 1], c - 1);
	hours[2] = atof(tempID);
	d = c;
	do {
		d++;
	} while (emp[d] != ',');
	strncpy(tempID, &emp[c + 1], d - 1);
	hours[3] = atof(tempID);
	e = d;
	do {
		d++;
	} while (emp[d] < 40);
	strncpy(tempID, &emp[c + 1], d);
	hours[4] = atof(tempID);

	return totalHours;
}


