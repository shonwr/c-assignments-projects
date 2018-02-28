// Lab 4.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

char fName[50];
char lName[50];
int main()
{
	system("color f0");
	printf("This program: \n\t(1)Prints an entered first and last name \n\t(2)Prints the number of letters in each name on the following line.\n\n");
	printf("Press enter to begin: ");
	scanf("%c");
	printf("\n\nEnter first name: ");
	scanf("%s",fName);
	printf("\nEnter last name: ");
	scanf("%s",lName);
	printf("\n\nYou enterered: %s %s \n",fName,lName);
	printf("               %d %d\n\n",strlen(fName),strlen(lName));
	
	system("pause");
	return 0;
	
}
