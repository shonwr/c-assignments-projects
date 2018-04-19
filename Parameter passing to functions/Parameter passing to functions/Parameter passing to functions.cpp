//Soliman, Sean
//Class - 439 Sp 2018
//Parameter passing to functions

// Parameter passing to functions.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

void calculate(int x);
int main()
{
	int num1;

	system("color f0");
	printf("Enter an integer to determine whether it is odd or even: ");
	scanf("%d",&num1);
	calculate(num1);
	system("pause");
    return 0;
}


//calculate function
void calculate(int x){
	if(x % 2 == 0)
	{
		printf("The integer you entered: %d, is even\n\n", x);
		printf("************************************\n");

	}else{
		printf("The integer you entered: %d, is odd\n\n", x);
		printf("***********************************\n");
	}
}
