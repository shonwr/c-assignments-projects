// menu and functions.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

void menu();
void pattern1();
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
	//char input;

	while(input != 'q'){
		system("color f0");
		system("cls");
		menu();
		//printf("press enter to return to return to menu or q to exit");
		//scanf("%c",input);
		system("pause");
	}
	printf("Program is now exiting...");
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

	//control transfer to selected pattern(function) to print
	switch(select){
		case 1:
			pattern1();
			break;
		case 2:
			pattern2();
			break;
		case 3:
			pattern3();
			break;
		case 4:
			pattern4();
			break;
		case 5:
			pattern5();
			break;
		case 6:
			pattern6();
			break;
		case 7:
			pattern7();
			break;
		case 8:
			pattern8();
			break;
		case 9:
			pattern9();
			break;
		case 10:
			pattern10();
			break;
	}
}

// 1 of 10
void pattern1(){
	int i,j;

	int countA=1;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%d ",countA);
			countA++;
		}
		printf("\n");
	}
	return;
}

// 2 of 10
void pattern2(){
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

