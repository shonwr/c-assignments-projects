// Comp Arch.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int int1;
int int2;

int main()
{
	printf("This program takes two integers and outputs their quotient and remainder.\n");
	printf("Press enter to begin: ");
	scanf("%c");
	
	printf("\n\nEnter integer 1: ");
	scanf("%d",&int1);

	printf("\nEnter integer 2: ");
	scanf("%d",&int2);

	printf("\n\n\n%d / %d has value: %d\n",int1, int2, int1/int2);
	printf("%d %% %d has value: %d\n\n",int1, int2, (int1)%(int2));

	system("pause");
    return 0;
}
