//Soliman, Sean
//Class - 439 Sp 2018
//Arrays of characters part 2

// Array of characters part 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

void reversePrint();

char a[50];
int i, counter=0;
int main(){
	char charInput;
	
	system("color f0");

	printf("Enter characters to place into the array to be output\n");
	do{
		printf("\nEnter character at index %d: ", counter);
		charInput = getche();
		a[counter] = charInput;
		counter++;
	}while(charInput != '!');
	printf("\n********************************");
	printf("\n\nData value\tindex value\n");
	for(int i=0; i<counter; i++){
		printf("\t%c\t%d\n",a[i],i);
	}
	printf("**********************************");
	reversePrint();

	system("pause");
    return 0;
}

void reversePrint(){
	printf("\nREVERSE\n");
	printf("\n\nData value\tindex value\n");
	for(int i=counter-1; i>=0; i--){
		printf("\t%c\t%d\n",a[i],i);
	}
}

