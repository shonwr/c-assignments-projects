// c txt test.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int main()
{
	int stockAmt[7];
    FILE * file;
	file = fopen("InventoryReport.txt","r");
	
	while(!feof(file)){
		fscanf(file, "%*s %*s %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d %*d %d", &stockAmt[0], &stockAmt[1], &stockAmt[2], &stockAmt[3], &stockAmt[4], &stockAmt[5], &stockAmt[6]);

	}

	fclose(file);
	system("pause");
    return 0;
}
