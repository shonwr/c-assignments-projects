//Soliman, Sean   
//Class - 439 Sp 2018
//WK 2 - Lab Assignment 3 Part 2

// lab 3 02.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;
int main()
{
	system ("color f0");
	//declare integer variables for group of users integers 
    int num1,num2,num3,num4,num5;
	//declare interger variable for largest and smallest integer
	int highNum, lowNum;
	printf("Determine the largest and smallest integer in a set of 5 integers\n\n");
	printf("Enter first integer\n");
	scanf("%d", &num1);
	printf("Enter second integer\n");
	scanf("%d", &num2);
	printf("Enter third integer\n");
	scanf("%d", &num3);
	printf("Enter fourth integer\n");
	scanf("%d", &num4);
	printf("Enter fifth integer\n");
	scanf("%d", &num5);
	printf("\n");
	//find largest integer 
	if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4) && (num1 >=num5))
	{
		highNum = num1;
	}
	if ((num2 >= num1) && (num2 >= num3) && (num2 >= num4) && (num2 >=num5))
	{
		highNum = num2;
	}
	if ((num3 >= num2) && (num3 >= num1) && (num3 >= num4) && (num3 >=num5))
	{
		highNum = num3;
	}
	if ((num4 >= num2) && (num4 >= num3) && (num4 >= num1) && (num4 >=num5))
	{
		highNum = num4;
	}
	if ((num5 >= num2) && (num5 >= num3) && (num5 >= num4) && (num5 >=num1))
	{
		highNum = num5;
	}
	//find smallest integer
	if ((num1 <= num2) && (num1 <=num3) && (num1 <= num4) && (num1 <= num5))
	{
		lowNum = num1;
	}
	if ((num2 <= num1) && (num1 <=num3) && (num2 <= num4) && (num2 <= num5))
	{
		lowNum = num2;
	}
	if ((num3 <= num2) && (num3 <=num1) && (num3 <= num4) && (num3 <= num5))
	{
		lowNum = num3;
	}
	if ((num4 <= num2) && (num4 <=num3) && (num4 <= num1) && (num4 <= num5))
	{
		lowNum = num4;
	}
	if ((num5 <= num2) && (num5 <=num3) && (num5 <= num4) && (num5 <= num1))
	{
		lowNum = num5;
	}
	// print largest & smallest integers
	printf("Largest integer in the group = %d\n",highNum);
	printf("Smallest integer in the group = %d\n\n",lowNum);


	system ("pause");
    return 0;
}
