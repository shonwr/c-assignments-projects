//Soliman, Sean   
//Class - 439 Sp 2018
//Menu and Functions

/*
Program containing a menu and functions
which print out different number patterns
*/

// menu and functions.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

void menu();
void pattern1(int x);
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();

int main(){
	char input;

	while(input != 'q'){
		system("color f0");
		system("cls");
		menu();
		printf("\n\nEnter to return to return to menu or q to exit: ");
		scanf("%c");
		scanf("%c",&input);
	}
	printf("Program is now exiting...\n\n");
	system("pause");
    return 0;
}


void menu(){
	int select;

	printf("Printing number pattern menu\n");
	printf("****************************\n");
	printf("Pattern 1: 1 through 20 printed 5x4\n");
	printf("Pattern 2: 9 through 1 printed 3x3\n");
	printf("Pattern 3: 1 through 3 printed 3x3\n");
	printf("Pattern 4: 1 through 5 ascending\n");
	printf("Pattern 5: 5 through 1 ascending\n");
	printf("Pattern 6: 8 to 0, even, ascending\n");
	printf("Pattern 7: 1 through 5 descending\n");
	printf("Pattern 8: 5 through 0 descending\n");
	printf("Pattern 9: 9,6,3 descending\n");
	printf("Pattern 10: 1 through 5 descending/descending\n");

	printf("\nEnter pattern to print: ");
	scanf("%d", &select);
	printf("****************************");
	printf("\n\n");
	if(select > 10){
		printf("Select a pattern between 1-10\n");
	}
	//control transfer to selected pattern(function) to print
	switch(select){
		case 1:
			int i=0;
			int j=0;
			pattern1(i, j);
			break;
		case 2:
			int i=0;
			int j=0;
			pattern2();
			break;
		case 3:
			int i=0;
			int j=0;
			pattern3();
			break;
		case 4:
			int i=1;
			int j=1;
			pattern4();
			break;
		case 5:
			int i=5;
			int j=5;
			pattern5();
			break;
		case 6:
			int i=8;
			int j=8;
			pattern6();
			break;
		case 7:
			int i=0;
			int j=0;
			pattern7();
			break;
		case 8:
			int i=0;
			int j=0;
			pattern8();
			break;
		case 9:
			int i=0;
			int j=0;
			pattern9();
			break;
		case 10:
			int i=0;
			int j=0;
			pattern10();
			break;
	}
}

// 1 of 10
void pattern1(int count,int j){

	int countA=1;
	for(i; i<4; i++){
		for(j; j<5; j++){
			printf("%d ",countA);
			countA++;
		}
		printf("\n");
	}
	return;
}

// 2 of 10
void pattern2(int countB){
	int i,j;

	int countB=9;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",countB);
			countB--;
		}
		printf("\n");
	}
	return;
}

// 3 of 10
void pattern3(){
	int i,j;

	for(i=0; i<3; i++){
		int countC=1;
		for(j=0; j<3; j++){
			printf("%d ",countC);
			countC++;
		}
		printf("\n");
	}
}

// 4 of 10
void pattern4(){
	int i,j;

	for(i=1; i<=5; i++){
		for(j=1; j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 5 of 10
void pattern5(){
	int i,j;

	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 6 of 10
void pattern6(){
	int i,j;

	for(i=8; i>=0; i-=2){
		for(j=8; j>=i; j-=2){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 7 of 10	
void pattern7(){
	int i,j;

	for(i=1; i<=5; i++){
		for(j=i; j<=5;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 8 of 10
void pattern8(){
	int i,j;

	for(i=5; i>=0; i--){
		for(j=0; j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
}

// 9 of 10	
void pattern9(){
	int i,j;

	int n=3;
	for(i=9; i>=3; i-=3){
		for(j=n; j>0; j--){
			printf("%d ",i);
		}
		printf("\n");
		n--;
	}
}
	

// 10 of 10		
void pattern10(){
	int i,j,n;

	n=5;
	for(i=5; i>=1; i--){ 
		for(j=1; j<=n; j++){
			printf("%d ", j);
		}
		printf("\n");
		n--;
	}
}

