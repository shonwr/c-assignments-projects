//Soliman, Sean   
//Class - 439 Sp 2018
//WK 5 - Lab Assignment 8 – Part 1

// Lab 8.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

char ch;
int intVal;
int main()
{
    system("color f0");
	printf("This program accepts lower case letters from a to e.\n");
	printf("Press enter to begin: ");
	scanf("%c");

	do{
		printf("\n\nEnter a lower case letter from a to e: ");
		//scanf("%d",intVal);
		ch = getche();
		printf("\nCharacter entered: %c",ch);
		//printf("\n");
		if (ch != 'a' && ch != 'b' && ch != 'c' && ch != 'd' && ch != 'e'){
			printf("\n\n**Not in the allowed group**\n\n");
		}
		
	}while(!isdigit(ch)); 
	
	printf("Program is quitting\n\n");

	system("pause");
    return 0;
}
