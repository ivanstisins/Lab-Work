#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "ctype.h"

void printLongestWord();

int findWord(char word[]);

int findWordWithMostVowels(int location);

int isVowel();



char words[][20] = { "mandarin","nonmember","anabranch","collinear","gyrostatic","nonchalky","reputationless","sinicization","poyntill","nonabsorbency" };
int nwords = 10;



void main()
{
	char word[20];
	int i = 0;

	printLongestWord();
	i = findWordWithMostVowels(isVowel());
	printf("Word with most vowels is: %s \n", words[i]);

	puts("enter word");
	gets_s(word);

	if (findWord(word))
	{
		printf("%s is in our list of words\n", word);
	}
	else
	{
		printf("%s is not in our list of words\n", word);
	}

}

void printLongestWord()
{
	// your code here
	int word = 0;
	int len = 0;
	int i = 0;
	for (i = 0; i < nwords; i++) {
		if (strlen(words[i]) > len) {
			len = strlen(words[i]);
			word = i;
		}
	}
	printf("longest word is %s wth %d characters\n", words[word], len);
}



int findWordWithMostVowels(int location) 

{
	return location;
}

int isVowel()
{
	// your code here
	int vowelNum[10];
	int vowelmost = 0;

	int location;

	for (int i = 0; i < nwords; i++) {
		int counter = 0;
		for (int j = 0; j < strlen(words[i]); j++) {

			if (words[i][j] == 'a' || words[i][j] == 'e' || words[i][j] == 'i' || words[i][j] == 'o' || words[i][j] == 'u') {
				vowelNum[i] = counter++;}
		}
	}
	for (int i = 0; i < nwords; i++) {
		if (vowelNum[i] > vowelmost)
		{
			vowelmost = vowelNum[i];
			location = i;
		 }
	}
	return location;
}

int findWord(char word[])
{
	// your code here
	int aux = 0;

	for (int i = 0; i < 10; i++) {

		if (!strcmp(word, words[i])) {
			aux = 1;
			break;
		}
		

	}

return aux;

}
