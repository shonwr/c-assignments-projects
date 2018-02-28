//Soliman, Sean   
//Class - 416 Sp 2018
//WK 2 - Homework 2.3

// Comp Arch 2.3.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int len;
int wid;
int main()
{
	system("color f0");
	printf("This program returns the area of a rectangle.\n");
	printf("Press enter to begin: ");
	scanf("%c");

	printf("\nEnter length of the rectangle: ");
	scanf("%d",&len);

	printf("\nEnter width of the rectangle: ");
	scanf("%d",&wid);

	printf("\n\nThe area of a %d by %d rectangle is %d.\n\n",len,wid,len*wid);

	system("pause");
    return 0;
}
