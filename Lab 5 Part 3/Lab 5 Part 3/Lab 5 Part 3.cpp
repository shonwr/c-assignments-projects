// Lab 5 Part 3.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

float dlSpeed, fileSize;
int main()
{
	system("color f0");
	printf("This program calculates the download time for a file\n\n");
	printf("Enter download speed in megabits per second(Mbps): ");
	scanf("%f",&dlSpeed);
	printf("\nEnter size of file in megabytes (MB): ");
	scanf("%f",&fileSize);
	
	float received = fileSize/(dlSpeed*0.125);
	printf("\nAt %.*f megabits per second, a file of %.*f megabytes downloads in %.*f seconds\n\n",2,dlSpeed,2,fileSize,2,received);
	

	system("pause");
    return 0;
}
