//Soliman, Sean   
//Class - 439 Sp 2018
//WK 5 - Lab Assignment 9

// Lab 9.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

char zipArr[3];
char pnumArr[3];
char txtsArr[3];
int reported = 0;
char listed[3];
char space = ' ';
int main(){
    system("color f0");
	printf("This program displays details about a customer ONLY if they send 100 or more text messages\n");
	
	for(int i=0;i<3;i++){
		printf("\n\n**************************************\n");
		printf("Enter telephone zip code(3 digits): ");
		scanf("%s",zipArr[i]);
		printf("\nEnter telephone number(7 digits): ");
		scanf("%s",pnumArr[i]);
		printf("\nEnter number of text messages: ");
		scanf("%s",txtsArr[i]);
	
	//printf("%d",zipArr[0]);
		
		if(txtsArr[i] >= 100){
			reported++;
			listed[i] = zipArr[i] + space + pnumArr[i] + space + txtsArr[i];
		}
	}
	
	for(int i=0; i<3;i++){
		printf("%s",listed[i]);
	}
	
	system("pause");
    return 0;
}
