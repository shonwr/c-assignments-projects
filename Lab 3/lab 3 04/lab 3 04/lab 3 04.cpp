//Soliman, Sean   
//Class - 439 Sp 2018
//WK 2 - Lab Assignment 3 Part 4

// lab 3 04.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int num1;
int main()
{
	system("color f0");
	printf("Enter an integer to display it's character equivalent: ");
	scanf("%d",&num1);
	if (num1 == 32)
	{
		printf("The character equivalent to integer %d = (space)\n\n",num1);
	}else
	{
		printf("The character equivalent to integer %d = %c\n\n",num1, num1);
	}

	system ("pause");
    return 0;
}
