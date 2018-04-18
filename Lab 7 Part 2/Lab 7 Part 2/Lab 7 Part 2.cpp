//Soliman, Sean   
//Class - 439 Sp 2018
//WK 4 - Lab Assignment 7 - Part 2

//Lab 7 Part 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int intVal;
char ch;
char octothorp = '#';
int main()
{
    system("color f0");
	printf("This program will allow you to type in integer values from 0 to 9.\n");	
	printf("Any number entered outside of these values will return an error.\n\n");
	printf("Press enter to begin: ");
	scanf("%c");

	printf("\nEnter an integer value from 0 to 9: ");
	scanf("%d",&intVal);
	ch = getchar();

	while (intVal >=0 && intVal <= 9 && ch != octothorp)
	{
		printf("The integer value you entered is: %d\n",intVal);
		printf("\nEnter an integer value from 0 to 9: ");
		scanf("%d",&intVal);
		ch = getchar();
	}

	printf("\n\nNot in the allowed group\n");
	printf("\Program is stopping\n\n");
	
	
	system("pause");
    return 0;
}
