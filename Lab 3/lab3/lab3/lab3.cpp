//Soliman, Sean   
//Class - 439 Sp 2018
//WK 2 - Lab Assignment 3 Part 1

// lab 3 01.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int num1, num2;
int main()
{
	system ("color f0");
	printf("Enter two integers to determine which is larger or whether they're equal\n\n");
	printf("Enter first integer: ");
	scanf("%d", &num1);
	printf("Enter second integer: ");
	scanf("%d", &num2);
	printf("\n");
	printf("You entered integers %d and %d \n\n",num1, num2);
	if (num1 > num2)
	{
		printf("%d is larger \n\n", num1);

	}

	if (num2 > num1)
	{
		printf("%d is larger \n\n", num2);
	}

	if (num1 == num2)
	{
		printf("These integers are equal \n\n");

	}
	system ("pause");
    return 0;
}
