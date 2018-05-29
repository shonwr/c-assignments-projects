//Soliman, Sean
//Class - 439 Sp 2018
//Test 2

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
void reportFunction();
//change foneCounter, ftwoCounter, &/or fthreeCounter numbers to test flights
//max capacity (fone/ftwo/fthree)counter = 15 = full
int choice, flightNum, foneCounter = 0, ftwoCounter = 0, fthreeCounter = 0, reportCounter = 1, report[45];
char input, minput, pinput, full[5]="FULL", avail[10]="AVAILABLE";

int main()
{
    system("color f0");
	menu:menuFunction();
	if(choice == 2){
		reportFunction();
		goto menu;
	}
	while(choice != 3){
		scheduleFunction();
		if(foneCounter<15 || ftwoCounter<15 || fthreeCounter<15){
			printf("Press enter to book a flight or m to return to menu: ");
			scanf("%c",&minput);
				if(minput == 'm'){
					goto menu;
				}
			vacancyFunction();
		}else{
			printf("\n\nAll flights are currently booked\n");
			printf("\n\nPress enter to return to menu: ");
			scanf("%c");
			goto menu;
	}
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
	printf("1.Flight schedule, availability, and booking\n");
	printf("2.Report of flights in order entered\n");
	printf("3.Exit\n\n");
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

	/*
	printf("Press enter to book a flight or m to return to menu: ");
	//minput = = getche();
	scanf("%c",&minput);
	*/

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
	report[reportCounter] = flightNum;
	reportCounter++;
	
	
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
	printf("\n\nPress enter to continue: ");
	scanf("%c");

	return;
}

void printReserv(){
	printf("******************************************\n");
	printf("\nWould you like to print your reservation?(y/n): ");
	scanf("%c", &pinput);
	scanf("%c", &pinput);
	if(pinput == 'y'){
		printf("\nPrinting your reservation...\n");
	}
	scanf("%c");
	return;
}

void reportFunction(){
	system("cls");
	printf("Report of flights booked in order entered\n");
	printf("*****************************************\n\n");
	
	if(reportCounter == 1){
		printf("There are no reported flights booked as of yet\n");
	}else{
		for(int i=1; i<reportCounter; i++){
			printf("%d. Flight %d\n", i, report[i]);
		}
		printf("******************************************\n\n");
		printf("Total number of flights booked for each flight\n\n");
		printf("Flight 1: %d\n", foneCounter);
		printf("Flight 2: %d\n", ftwoCounter);
		printf("Flight 3: %d\n", fthreeCounter);
	}
	
	printf("\n\nPress enter to return to menu: ");
	scanf("%c");
}