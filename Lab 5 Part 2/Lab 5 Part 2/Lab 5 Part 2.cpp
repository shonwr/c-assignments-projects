//Soliman, Sean   
//Class - 439 Sp 2018
//WK 3 - Lab Assignment 5 Part 2

// Lab 5 Part 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

char fName[20];
int main()
{
    system("color f0");
	printf("This program takes a name and: \n\t(a)Prints it enclosed in quotation marks\n\t(b)Prints it in a field 20 characters wide, with the whole field in quotes and the name at the right end of the field\n\t(c)Prints it at the left end of a field 20 characters wide, with the whole field enclosed in quotes\n\t(d)Prints it in a field three characters wider than the name\n");
	printf("\nPress enter to begin: ");
	scanf("%c");

	printf("\nEnter a name: ");
	scanf("%s",fName);

	printf("\n(a)\"%s\"",fName);
	printf("\n(b)\"%20s\"",fName);
	printf("\n(c)\"%-20s\"",fName);

	int fnameLen = (strlen(fName)+3);
	printf("\n(d)\"%-*s\" \n\n", fnameLen, fName);



	system("pause");
    return 0;
}
