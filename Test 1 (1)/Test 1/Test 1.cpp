//Soliman, Sean
//Class - 439 Sp 2018
//Test 1

// Test 1.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;


int ch;
int i = 0;
//declare/initialize counters
int charWords = 0;
int charAvg = 0;
int charCount = -1;
int main()
{
	//Program description 
    system("color f0");
	printf("This program accepts single character data until the enter key is pressed.\n");
	printf("Press enter to begin: ");
	scanf("%c");
	
	//do loop to continue getting user input
	do
	{
		printf("\n\nEnter a single character digit: ");
		ch = getche();
		printf("\nCharacter entered: %c",ch);
	//counters to count # of characters		
		charCount++;
		if(isspace(ch))
		{
			charWords++;
		}
	//check for "enter key" by user, and displays result
		if(ch == '\r')
		{
			charAvg = charCount/charWords;
			printf("\n\n\n*********************************************");
			printf("\n\nWords typed: %d", charWords);
			printf("\nAverage number of characters per word: %d", charAvg);
			printf("\nCharacters used in entire sentence: %d", charCount);
			printf("\n*********************************************");
			printf("\n\n");
			break;
		}
	//1 condition = infinite loop; break's @ if statement
	}while(1); 

	printf("Program is quitting\n\n");
	system("pause");
    return 0;
}
