// c final.cpp : main project file.

#include "stdafx.h"
#include <iostream>
//time header used for date 
#include <time.h>
using namespace System;
using namespace std;

void menu();
void inventoryReport();
void sellStock();

//global array for use throughout functions
int stockAmt[100];

int main(){
//********(start) create objects for file and time********
//create file object
	FILE * file;
//set file object to open txt (fopen())
	file = fopen("InventoryReport.txt","r");
//create time object
	time_t myTime;
	myTime = time(NULL);
//********(end) create objects for file and time**********

//user selections
	int choice;
	char buff, exit;
do{
	menu();
	scanf("%d",&choice);
	if(choice == 1){
		rewind(file);
		inventoryReport();
	}else if(choice == 2){
		system("cls");
		rewind(file);
//**********(start) title header**************************
		printf("\t\tWidget Corporation\n");
		printf("Inventory Report as of ");
		printf(ctime(&myTime));
		printf("\n");
//**********(end) title header****************************
		while(!feof(file)){
			fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
		
			printf("Item Number\tInventory Stock\n");
			printf("1112\t\t%d\n",stockAmt[0]);
			printf("1212\t\t%d\n",stockAmt[1]);
			printf("1241\t\t%d\n",stockAmt[2]);
			printf("1562\t\t%d\n",stockAmt[3]);
			printf("1822\t\t%d\n",stockAmt[4]);
			printf("1900\t\t%d\n",stockAmt[5]);
			printf("2100\t\t%d\n",stockAmt[6]);
		}
		

		printf("\n\nAre there any items you'd like to sell? (y/n): ");
		scanf("%c",&exit);
		scanf("%c",&exit);
		if(exit == 'y'){
			sellStock();
		}else if(exit != 'n'){
			puts("Please enter either y or n");
		}
	}
}while(choice != 3);
	fclose(file);
	puts("");
	system("pause");
    return 0;
}

void menu(){
	system("cls");

	printf("\t\tWidget Corporation\n");
	printf("\t\t  Inventory Menu\n\n");
	puts("1.Inventory Report");
	puts("2.Sell Inventory Stock");
	puts("3.Exit");
	printf("\nEnter selection: ");
}

void inventoryReport(){
	char buff;

	system("cls");
//********(start) create objects for file and time********
//create file object
	FILE * file;
//set file object to open txt (fopen())
	file = fopen("InventoryReport.txt","r");
//create time object
	time_t myTime;
	myTime = time(NULL);
//********(end) create objects for file and time**********

//**********(start) title header**************************
	printf("\t\tWidget Corporation\n");
	printf("Inventory Report as of ");
	printf(ctime(&myTime));
	printf("\n");
//**********(end) title header****************************

	//system("color f0");
	while(!feof(file)){
		fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
		
		printf("Item Number\tInventory Stock\n");
		printf("1112\t\t%d\n",stockAmt[0]);
		printf("1212\t\t%d\n",stockAmt[1]);
		printf("1241\t\t%d\n",stockAmt[2]);
		printf("1562\t\t%d\n",stockAmt[3]);
		printf("1822\t\t%d\n",stockAmt[4]);
		printf("1900\t\t%d\n",stockAmt[5]);
		printf("2100\t\t%d\n",stockAmt[6]);
	}

	puts("\nPress enter to return to menu");
	scanf("%c",&buff);
	scanf("%c",&buff);
}

void sellStock(){
	int userItem, amount;
	char buff, exit;
	

	system("cls");
//********(start) create objects for file and time********
//create file object
	FILE * file;

//set file object to open txt (fopen())
	file = fopen("InventoryReport.txt","r+");

//create time object
	time_t myTime;
	myTime = time(NULL);
//********(end) create objects for file and time**********
	
	system("cls");

//**********(start) title header**************************
	printf("\t\tWidget Corporation\n");
	printf("\t\t  Sell Inventory\n\n");	
//**********(end) title header****************************
	//system("color f0");
	do{
		system("cls");
		rewind(file);
		while(!feof(file)){
			fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
		//*******************add print f for inventory stock etc header
			printf("Item Number\tInventory Stock\n");
			printf("1112\t\t%d\n",stockAmt[0]);
			printf("1212\t\t%d\n",stockAmt[1]);
			printf("1241\t\t%d\n",stockAmt[2]);
			printf("1562\t\t%d\n",stockAmt[3]);
			printf("1822\t\t%d\n",stockAmt[4]);
			printf("1900\t\t%d\n",stockAmt[5]);
			printf("2100\t\t%d\n",stockAmt[6]);;
			
		}


		printf("\nEnter item number that you'd like to sell: ");
		scanf("%d",&userItem);
		switch(userItem){
			case 1112:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[0]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[0] = stockAmt[0] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[0]);
				break;
			case 1212:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[1]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[1] = stockAmt[1] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[1]);
				break;
			case 1241:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[2]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[2] = stockAmt[2] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[2]);
				break;
			case 1562:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[3]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[3] = stockAmt[3] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[3]);
				break;
			case 1822:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[4]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[4] = stockAmt[4] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[4]);
				break;
			case 1900:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[5]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[5] = stockAmt[5] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[5]);
				break;
			case 2100:
				printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[6]);
				printf("How many would you like to sell: ");
				scanf("%d",&amount);
				printf("\nYour sell amount: %d\n",amount);
				stockAmt[6] = stockAmt[6] - amount;
				printf("New stock amount for item %d: %d\n",userItem, stockAmt[6]);
				break;
		}
		printf("*************************************************");
		printf("\n\nAre there any more items you'd like to sell? (y/n): ");
		scanf("%c",&exit);
		scanf("%c",&exit);	
		rewind(file);
		fprintf(file, "Item Number Inventory Stock\n1112\t\t%d\n1212\t\t%d\n1241\t\t%d\n1562\t\t%d\n1822\t\t%d\n1900\t\t%d\n2100\t\t%d", stockAmt[0], stockAmt[1], stockAmt[2], stockAmt[3], stockAmt[4], stockAmt[5], stockAmt[6]);
		fclose(file);
	}while(exit != 'n');
	
//rebuild(write) inventory list************************************************************************
		/*
		fopen("InventoryReport.txt","r+");
		fprintf(file, "Item Number Inventory Stock\n1112\t\t%d\n1212\t\t%d\n1241\t\t%d\n1562\t\t%d\n1822\t\t%d\n1900\t\t%d\n2100\t\t%d\n", stockAmt[0], stockAmt[1], stockAmt[2], stockAmt[3], stockAmt[4], stockAmt[5], stockAmt[6]);
		fclose(file);
		*/

	puts("\n\nPress enter to return to menu");
	scanf("%c",&buff);
	scanf("%c",&buff);
}