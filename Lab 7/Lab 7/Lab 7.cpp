//Soliman, Sean   
//Class - 439 Sp 2018
//WK 4 - Lab Assignment 7 - Part 1


// Lab 7.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int intVal;
int main()
{
    system("color f0");
	printf("This program will allow you to type in integer values from 0 to 9.\n");	
	printf("Any number entered outside of these values will return an error.\n\n");
	printf("Press enter to begin: ");
	scanf("%c");

	printf("Enter an integer value from 0 to 9: ");
	scanf("%d",&intVal);

	if (intVal >=0 && intVal <= 9)
	{
		printf("\nThe integer value you entered is: %d\n\n",intVal);
	}else
	{
		printf("\n\nNot in the allowed group\n\n");
	}


	system("pause");
    return 0;
}
