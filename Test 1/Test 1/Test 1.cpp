// Test 1.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

char ch;
int main()
{
    system("color f0");
	printf("This program accepts single character data until the user presses the enter key.\n\n");
	do{
		printf("Enter a single character: ");
		ch = fgetc(stdin);
		printf("\nCharacter entered: %c", ch);
		printf("\n\n");
	}while(getche() != '\n');

	system("pause");
    return 0;
}
