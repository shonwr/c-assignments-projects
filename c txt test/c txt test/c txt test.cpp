// c txt test.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int main()
{
	int stockAmt[100];
	int itemNum[100];
    FILE * file;
	file = fopen("InventoryReport.txt","r");
	
	while(!feof(file)){
		fscanf(file, "%*s %*s %*s %*s %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d", &itemNum[0], &itemNum[1], &itemNum[2], &itemNum[3], &itemNum[4], &itemNum[5], &itemNum[6]);
		rewind(file);
		fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);
	}

	for(int i=0; i<7; i++){
		printf("%d\t%d\n",itemNum[i], stockAmt[i]);
	}

	fclose(file);
	system("pause");
    return 0;
}
