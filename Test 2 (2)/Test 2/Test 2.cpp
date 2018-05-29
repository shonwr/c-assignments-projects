// Test 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace System;
using namespace std;

void menuFunction();
void scheduleFunction();
void vacancyFunction();
void printReserv();
int choice, flightNum, foneCounter = 0, ftwoCounter = 0, fthreeCounter = 0;
char input, minput, pinput, full[5]="FULL", avail[10]="AVAILABLE";

int main()
{
    system("color f0");
	menu:menuFunction();
	while(choice != 2){
		scheduleFunction();
		if(minput == 'm'){
			goto menu;
		}
		if(foneCounter<15 || ftwoCounter<15 || fthreeCounter<15){
			vacancyFunction();
		}else
			printf("All flights are booked\n");
	}
	printf("\n\n");
	printf("Program is exiting.\n\n");
	system("pause");
    return 0;
}


void menuFunction(){
	system("cls");
	printf("FAST FLIGHT AIRLINES\n");
	printf("**********************\n");
	printf("1.Flight schedule and availability\n");
	printf("2.Exit\n\n");
	//printf("2.Report\n");
	printf("Enter your selection: ");
	scanf("%d",&choice);
	scanf("%c");
}


void scheduleFunction(){
	system("cls");
	printf("FAST FLIGHT AIRLINES\n");
	printf("********************************************\n\n");
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

	printf("Press enter to book a flight or m to return to menu: ");
	//minput = = getche();
	scanf("%c",&minput);
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
	printf("\n\nEnter flight number to book: ");
	scanf("%d", &flightNum);
	
//book flight 1
	if(flightNum == 1 && foneCounter < 15){
		foneCounter++;
		printf("\n\nFlight 1 booked\n");
		printReserv();
	}else if(flightNum == 1 && foneCounter >= 15){
		printf("\n\nUnable to book flight\n");
		printf("Flight 1 already full\n");
	}

//book flight 2
	if(flightNum == 2 && ftwoCounter < 15){
		ftwoCounter++;
		printf("\n\nFlight 2 booked\n");
		printReserv();
	}else if(flightNum == 2 && ftwoCounter >= 15){
		printf("\n\nUnable to book flight\n");
		printf("Flight 2 already full\n");
	}

//book flight 3
	if(flightNum == 3 && fthreeCounter < 15){
		fthreeCounter++;
		printf("\n\nFlight 3 booked\n");
		printReserv();
	}else if(flightNum == 3 && fthreeCounter >= 15){
		printf("\n\nUnable to book flight\n");
		printf("Flight 3 already full\n");
	}
	printf("\n\nPress enter to continue");
	scanf("%c");

	return;
}
//fix not waiting for user print response 
void printReserv(){
	//system("cls");
	printf("******************************************\n");
	printf("\nWould you like to print your reservation?(y/n): ");
	//pinput = getche();
	scanf("%c", &pinput);
	scanf("%c");
	if(pinput = 'y'){
		printf("\n\nPrinting your reservation...");
	}
	return;
}

