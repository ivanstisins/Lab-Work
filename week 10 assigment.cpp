#include "stdafx.h"
#include "string.h"
#include "stdlib.h"
#include "time.h"



struct date
{
	int day, month, year;
};

struct customer
{
	char name[50];
	int accountNumber;
	double balance;
	struct date lastTrans;
};

int getDay(int month);
int getMonth();
int getYear();
double getBalance();

void printCustomers(struct customer customers[], int nCustomers);
void populateCustomers(struct customer customers[], int nCustomers);
int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers);

int main()
{
	int i;

	srand(time(NULL));

	struct customer customers[10];

	populateCustomers(customers, 10);

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	if (!(transaction(customers, 10001, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 10001);
	}
	else
	{
		printf("account number %d - transaction processed", 10001);
	}
	printf("\n\n");

	if (!(transaction(customers, 33, -967.89, 10)))
	{
		printf("account number %d not found - transaction cancelled", 33);
	}
	else
	{
		printf("account number %d  - transaction processed", 33);
	}
	printf("\n\n");

	printf("%25s\t%13s\t%12s\t%s\n\n", "Name", "Account Number", "Balance", "Date of Last Transaction");

	printCustomers(customers, 10);

	printf("\n\n");

	return 0;
}

int getDay(int month)
{
	int day, max = 31;
	if (month == 2) {
		day = rand() % 28 + 1;
	}
	if (month == 4 || 6 || 9 || 11) {
		day = rand() % 30 + 1;
	}
	else {
		day = rand() % 31 + 1;
	}
	// this function should return a random day number, with the maximum varying depending on the month

	return day;
}

int getMonth()
{
	int month;
	month = rand() % 12 + 1;

	// this function should return a random number between 1 and 12

	return month;
}

int getYear()
{

	int year;
	year = rand() % 2017;
	if (year < 2013) {
		year = rand() % 4 + 2013;
	}

	return year;
}

double getBalance()
{
	double balance;
	int range;
	range = rand() % 10000;
	balance = range - 5000;
	// this function should return a random balance, for example between -5000 and +5000
	return balance;
}

void printCustomers(struct customer customers[], int nCustomers)
{
	int i;
	for (i = 0; i < nCustomers; i++)
		printf("%25s \t %13d \t %12.2lf \t\t %d/%d/%d \n\n", customers[i].name, customers[i].accountNumber, customers[i].balance, customers[i].lastTrans);
	// simply print out the array of customers, as neatly formatted as possible

	return;
}

void populateCustomers(struct customer customers[], int nCustomers)
{
	int i;
	char names[10][50] = { "Haiden Soto","Oscar Hernandez","Heath Hickman","Reagan Mcknight","Noah Bartlett","Ross Day","Maribel Livingston","Jewel Phillips","Blake Gardner","Fernanda Ponce" };

	for (i = 0; i<nCustomers; i++)
	{
		strcpy(customers[i].name, names[i]);
		customers[i].accountNumber = 10000 + i;
		customers[i].balance = getBalance();
		customers[i].lastTrans.year = getYear();
		customers[i].lastTrans.month = getMonth();
		customers[i].lastTrans.day = getDay(getMonth());


		// use the functions above to get values for the rest of the data structure
	}

	return;

}

int transaction(struct customer customers[], int accountNumber, double amount, int nCustomers)
{
	int i;	
	int max;

	for (i = 0; i < nCustomers; i++) {
		if (customers[i].accountNumber == accountNumber) {
			customers[i].balance += amount;
			max= 1;
			break;
		}
		else {
			max = 0;
		}
	}
	if (max == 1) {
		return 1;
	}
	else {
		return 0;
	}
	// find the customer structure based on the account number, process the transaction (change the balance)
	// and return 1
	// if customer account number not found, return 0

	

}

