// Comp Arch.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int num1;
int main()
{
	system ("color f0");
    printf("Enter an integer to determine whether or not it is even: ");
	scanf("%d",&num1);
	if(num1 % 2 == 0)
	{
		printf("The integer you entered: %d - is even\n\n",num1);

	}else{
		printf("The integer you entered: %d - is not even\n\n",num1);
	}
	system("pause");
	return 0;
}
