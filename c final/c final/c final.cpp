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

//global array to keep count through use throughout functions
int stockAmt[100];

int main(){
//********(start) create objects for file and time********
//create file object
	FILE * file;
//set file object to open txt (fopen())
	file = fopen("InventoryReport.txt","r+");
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
		puts("\nPress enter to return to menu");
		scanf("%c",&buff);
		scanf("%c",&buff);

	}else if(choice == 2){
		rewind(file);
		inventoryReport();
		printf("\n\nAre there any items you'd like to sell? (y/n): ");
		scanf("%c",&exit);
		scanf("%c",&exit);
		if(exit == 'y'){
			sellStock();
		}else if(exit != 'n'){
			printf("\n\nPlease enter either y or n");
			printf("\n\n\nPress enter to return to menu");
			scanf("%c",&buff);
			scanf("%c",&buff);
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
	//int stockAmt[100];

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
	rewind(file);
	while(!feof(file)){
		fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
		
		printf("Item Number\tInventory Stock\n");
			if(stockAmt[0] == 0){
				printf("1112\t\tOut of stock\n");
			}else{
				printf("1112\t\t%d\n",stockAmt[0]);
			}

			if(stockAmt[1] == 0){
				printf("1212\t\tOut of stock\n");
			}else{
				printf("1212\t\t%d\n",stockAmt[1]);
			}

			if(stockAmt[2] == 0){
				printf("1241\t\tOut of stock\n");
			}else{
				printf("1241\t\t%d\n",stockAmt[2]);
			}

			if(stockAmt[3] == 0){
				printf("1562\t\tOut of stock\n");
			}else{
				printf("1562\t\t%d\n",stockAmt[3]);
			}

			if(stockAmt[4] == 0){
				printf("1822\t\tOut of stock\n");
			}else{
				printf("1822\t\t%d\n",stockAmt[4]);
			}

			if(stockAmt[5] == 0){
				printf("1900\t\tOut of stock\n");
			}else{
				printf("1900\t\t%d\n",stockAmt[5]);
			}

			if(stockAmt[6] == 0){
				printf("2100\t\tOut of stock\n");
			}else{
				printf("2100\t\t%d\n",stockAmt[6]);
			}
	}
}

void sellStock(){
	int userItem, amount, transactionCount = 0, month, day, year;
//soldItem & soldAmt array used for transaction report
	//int stockAmt[100];
	int soldItem[100];
	int soldAmt[100];
	char buff, exit;

	system("cls");
//********(start) create objects for file and time********
//create file object
	FILE * file;

//set file object to open txt (fopen())
	file = fopen("InventoryReport.txt","w+");

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
			//scan inventory txt file and fill array with data/values
			fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
			printf("Item Number\tInventory Stock\n");
			if(stockAmt[0] == 0){
				printf("1112\t\tOut of stock\n");
			}else{
				printf("1112\t\t%d\n",stockAmt[0]);
			}

			if(stockAmt[1] == 0){
				printf("1212\t\tOut of stock\n");
			}else{
				printf("1212\t\t%d\n",stockAmt[1]);
			}

			if(stockAmt[2] == 0){
				printf("1241\t\tOut of stock\n");
			}else{
				printf("1241\t\t%d\n",stockAmt[2]);
			}

			if(stockAmt[3] == 0){
				printf("1562\t\tOut of stock\n");
			}else{
				printf("1562\t\t%d\n",stockAmt[3]);
			}

			if(stockAmt[4] == 0){
				printf("1822\t\tOut of stock\n");
			}else{
				printf("1822\t\t%d\n",stockAmt[4]);
			}

			if(stockAmt[5] == 0){
				printf("1900\t\tOut of stock\n");
			}else{
				printf("1900\t\t%d\n",stockAmt[5]);
			}

			if(stockAmt[6] == 0){
				printf("2100\t\tOut of stock\n");
			}else{
				printf("2100\t\t%d\n",stockAmt[6]);
			}
		}


		printf("\nEnter item number that you'd like to sell: ");
		scanf("%d",&userItem);


//switch statement for selling of item inventory, calculation, & modify array value
		switch(userItem){
			case 1112:
				if(stockAmt[0] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[0]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[0] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
						printf("\nYour sell amount: %d\n",amount);
						stockAmt[0] = stockAmt[0] - amount;
						printf("New stock amount for item %d: %d\n",userItem, stockAmt[0]);
					}
				}
				break;
			case 1212:
				if(stockAmt[1] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[1]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[1] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
						printf("\nYour sell amount: %d\n",amount);
						stockAmt[1] = stockAmt[1] - amount;
						printf("New stock amount for item %d: %d\n",userItem, stockAmt[1]);
					}
				}
				break;
			case 1241:
				if(stockAmt[2] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[2]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[2] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
					printf("\nYour sell amount: %d\n",amount);
					stockAmt[2] = stockAmt[2] - amount;
					printf("New stock amount for item %d: %d\n",userItem, stockAmt[2]);
					}
				}
				break;
			case 1562:
				if(stockAmt[3] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[3]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[3] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
					printf("\nYour sell amount: %d\n",amount);
					stockAmt[3] = stockAmt[3] - amount;
					printf("New stock amount for item %d: %d\n",userItem, stockAmt[3]);
					}
				}
				break;
			case 1822:
				if(stockAmt[4] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[4]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[4] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
					printf("\nYour sell amount: %d\n",amount);
					stockAmt[4] = stockAmt[4] - amount;
					printf("New stock amount for item %d: %d\n",userItem, stockAmt[4]);
					}
				}
				break;
			case 1900:
				if(stockAmt[5] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[5]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[5] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
					printf("\nYour sell amount: %d\n",amount);
					stockAmt[5] = stockAmt[5] - amount;
					printf("New stock amount for item %d: %d\n",userItem, stockAmt[5]);
					}
				}
				break;
			case 2100:
				if(stockAmt[6] == 0){
					printf("\n\nOut of stock\n");
				}else{
					printf("\n\nAmount in stock for item %d: %d\n",userItem, stockAmt[6]);
					printf("How many would you like to sell: ");
					scanf("%d",&amount);
					if(stockAmt[6] - amount < 0){
						printf("\n\nCannot sell more than available\n");
					}else{
					printf("\nYour sell amount: %d\n",amount);
					stockAmt[6] = stockAmt[6] - amount;
					printf("New stock amount for item %d: %d\n",userItem, stockAmt[6]);
					}
				}
				break;
		}
		soldItem[transactionCount] = userItem;
		soldAmt[transactionCount] = amount;
		transactionCount++;
		

		printf("*************************************************");
		printf("\n\nAre there any more items you'd like to sell? (y/n): ");
		scanf("%c",&exit);
		scanf("%c",&exit);	
		rewind(file);
//rebuild(write) inventory list************************************************************************
		fprintf(file, "Item Number Inventory Stock\n1112\t\t%d\n1212\t\t%d\n1241\t\t%d\n1562\t\t%d\n1822\t\t%d\n1900\t\t%d\n2100\t\t%d", stockAmt[0], stockAmt[1], stockAmt[2], stockAmt[3], stockAmt[4], stockAmt[5], stockAmt[6]);
	}while(exit != 'n');

//*****(start)get date from user for transaction report********
	system("cls");
	printf("Enter todays Month (Jan = 1,Feb = 2,... Dec = 12): ");
	scanf("%d",&month);
	printf("\n\nEnter todays date (01, 02,... 30): ");
	scanf("%d",&day);
	printf("\n\nEnter year (2018, 2019,... 2022): ");
	scanf("%d",&year);
//*****(end)get date from user for transaction report********

//*****(start)print transaction report******
	system("cls");
	printf("\tTransaction Report\n");
	printf("\t     %d/%d/%d\n\n",month, day, year);
	printf("Item Number\tInventory Sold\n");
	for(int i=0; i<transactionCount; i++){
		printf("%d\t\t%d\n",soldItem[i], soldAmt[i]);
	}



//*****(end)print transaction report******

	puts("\n\nPress enter to return to menu");
	scanf("%c",&buff);
	scanf("%c",&buff);
}