//Soliman, Sean   
//Class - 439 Sp 2018
//WK 3 - Lab Assignment 5 Part 1

// Lab 5.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;


char fName[20];
char lName[20];
int main()
{
	system("color f0");
    printf("This program prints out an entered first and last name in last, first format\n");
	printf("Press enter to begin: ");
	scanf("%c");

	printf("\n\nEnter first name: ");
	scanf("%s",fName);

	printf("\nEnter last name: ");
	scanf("%s",lName);

	printf("\n\nThe name you entered is: %s, %s\n\n",lName,fName);
	
	system("pause");
    return 0;
}
