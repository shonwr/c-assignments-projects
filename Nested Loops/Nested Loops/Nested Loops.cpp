//Soliman, Sean   
//Class - 439 Sp 2018
//Nested Loops

// Nested Loops.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int i,j;
int main()
{
    system("color f0");
// 1 of 10
	int countA=1;
	for(i=0; i<4; i++){
		for(j=0; j<5; j++){
			printf("%d ",countA);
			countA++;
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 2 of 10
	int countB=9;
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",countB);
			countB--;
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 3 of 10
	for(i=0; i<3; i++){
		int countC=1;
		for(j=0; j<3; j++){
			printf("%d ",countC);
			countC++;
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 4 of 10
	for(i=1; i<=5; i++){
		for(j=1; j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 5 of 10
	for(i=5; i>=1; i--){
		for(j=5; j>=i; j--){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 6 of 10
	for(i=8; i>=0; i-=2){
		for(j=8; j>=i; j-=2){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 7 of 10	
	for(i=1; i<=5; i++){
		for(j=i; j<=5;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 8 of 10
	for(i=5; i>=0; i--){
		for(j=0; j<=i;j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("///////////////////\n\n");

// 9 of 10	
	int n=3;
	for(i=9; i>=3; i-=3){
		for(j=n; j>0; j--){
			printf("%d ",i);
		}
		printf("\n");
		n--;
	}
	printf("///////////////////\n\n");

// 10 of 10		
	n=5;
	for(i=5; i>=1; i--){ 
		for(j=1; j<=n; j++){
			printf("%d ", j);
		}
		printf("\n");
		n--;
	}
	printf("\n");

	system("pause");
    return 0;
}
