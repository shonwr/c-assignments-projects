// Test 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

void menuFunction();
void scheduleFunction();
void vacancyFunction();
void testFunc();
int choice, foneCounter = 0, ftwoCounter = 0, fthreeCounter = 0, flightNum;
char input, full[5]="FULL", avail[10]="AVAILABLE";

int main()
{
    system("color f0");
	do{
		scheduleFunction();
		vacancyFunction();
	}while(1);
	system("pause");
    return 0;
}

/*
void menuFunction(){
	printf("FAST FLIGHT AIRLINES\n");
	printf("**********************\n");
	printf("1.Flight schedule and availability\n");
	printf("2.Report\n\n");
	printf("Enter your selection: ");
	scanf("%d",choice);
}
*/

void scheduleFunction(){
	system("cls");
	printf("NUMBER\tDAY\tTIME\t\tAVAILABILITY\n\n");
	if(foneCounter<15){
		printf("1\tMon\t6:00 AM\t\t%d\n",15-foneCounter);
	}else{ 
		printf("1\tMon\t6:00 AM\t\t%s\n",full);
	}

	if(ftwoCounter<15){
		printf("2\tWed\t12:00 PM\t%d\n",15-ftwoCounter);
	}else{
		printf("2\tWed\t12:00 PM\t%s\n",full);
	}
	if(fthreeCounter<15){
		printf("3\tFri\t6:00 PM\t\t%d\n",15-fthreeCounter);
	}else{
		printf("3\tFri\t6:00 PM\t\t%s\n",full);
	}
	printf("********************************************\n\n");
	/*
	printf("****FLIGHT #1 IS %s****\n",(foneCounter < 15) ? avail:full);
	printf("**********************\n\n");
	printf("****FLIGHT #2 IS %s****\n",(ftwoCounter < 15) ? avail:full);
	printf("**********************\n\n");
	printf("****FLIGHT #3 IS %s****\n",(fthreeCounter < 15) ? avail:full);
	printf("**********************\n\n");
	*/
	
}

void vacancyFunction(){
	printf("\n\n");
	if(foneCounter<15 || ftwoCounter<15 || fthreeCounter<15){
		printf("Press enter to book a flight or m to return to menu: ");
		scanf("%c");
	}else{
		printf("All flights are booked\n");
		return;
	}

	printf("\n\nEnter flight number to book: ");
	scanf("%d", &flightNum);
	
//book flight 1
	if(flightNum == 1 && foneCounter < 15){
		foneCounter++;
		printf("\n\nFlight 1 booked\n");
	}else if(flightNum == 1 && foneCounter >= 15){
		printf("n\nUnable to book flight\n");
		printf("Flight 1 already full\n");
	}

//book flight 2
	if(flightNum == 2 && ftwoCounter < 15){
		ftwoCounter++;
		printf("n\nFlight 2 booked\n");
	}else if(flightNum == 2 && ftwoCounter >= 15){
		printf("n\nUnable to book flight\n");
		printf("Flight 2 already full\n");
	}
//book flight 3
	if(flightNum == 3 && fthreeCounter < 15){
		fthreeCounter++;
		printf("n\nFlight 3 booked\n");
	}else if(flightNum == 3 && fthreeCounter >= 15){
		printf("n\nUnable to book flight\n");
		printf("Flight 3 already full\n");
	}
	printf("Press enter to continue");
	scanf("%c");
	return;
}

void testFunc(){
	system("cls");
	printf("other goto menu");
}

