// Lab 4.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

char fName[50];
char lName[50];
char space[10] = " ";
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
	//Aligned @ end
	printf("\n\nYou enterered: %s %s \n",fName,lName);
	int fLength = (strlen(fName));
	int lLength = (strlen(lName));
	int fSpaceEnd = (strlen(fName)-2);
	int lSpaceEnd = (strlen(lName)-1);
	printf("               %*s %d", "%*s\n\n",fSpaceEnd,space,fLength,lSpaceEnd,space,lLength);

	//Aligned @ beginning
	printf("\n\nYou enterered: %s %s \n",fName,lName);
	int fSpace = (strlen(fName)-2);
	printf("               %d %-*s %d\n\n",fLength,fSpace,space,lLength);
	
	system("pause");
	return 0;
	
}
