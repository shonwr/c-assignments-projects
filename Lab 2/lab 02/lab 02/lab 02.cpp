//Soliman, Sean   
//Class - 439 Sp 2018
//WK 1 - Lab Assignment 2

// sean.cpp : main project file.
#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;
int main()
{
    //declare variables 
	int int1, int2;
	double a;
	a = int1/int2;
	
	//change program/shell/terminal background to white to save toner
	system("color f0");
	
	//prompt user to enter first integer
    printf("Enter integer 1: ");
	
	/*reads user input and assigns it to first variable (&variableNameHere); in this case int1
	%d is a number place holder followed by comma and &variableName, where variableName is the variable you declare
	placing "&" before variablename puts value into your variable*/
    scanf("%d", &int1);
    
	//prompt user to enter second integer
	printf("Enter integer 2: ");
	
	//reads user input and assigns it to second variable (&variableNameHere); in this case int2
    scanf("%d", &int2);
	
	//results with mathematical calculation
	printf("\n\n\n\n\n ");
	printf("\t\t  ******************************************\n");
    printf("\t\t  *    Welcome to my arithmetic program!   *\n");
	printf("\t\t  *                                        *\n");
    printf("\t\t  *  The numbers you typed in are %d and %d  *\n", int1, int2);
    printf("\t\t  *  Addition:          %d + %d = %d          *\n",int1, int2, int1+int2);
	printf("\t\t  *  Subtraction:       %d - %d = %d          *\n",int1, int2, int1-int2);
	printf("\t\t  *  Multiplication:    %d * %d = %d         *\n",int1, int2, int1*int2);
	printf("\t\t  *  Division:          %d / %d = %d          *\n",int1, int2, a);
	printf("\t\t  *  Remainder:         %d %% %d = %d          *\n",int1, int2, int1%int2);
	printf("\t\t  ******************************************\n");
	
    system("pause");
    return 0;
}