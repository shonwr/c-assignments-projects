// Test 9 pre.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

//Sample Data Input
int phNumArr[4][4] = {
	{818, 345, 6789, 20}, 
	{312, 980, 2345, 250}, 
	{818, 364, 7742, 80},
	{818, 988, 3212, 112}
};
/*
int arrTwo[] = {312, 980, 2345, 250};
int arrThree[] = {818, 364, 7742, 80};
int arrFour[] = {818, 988, 3212, 112};
*/
int main()
{

	printf("\t\tREPORT OF CUSTOMERS WITH 100 OR MORE MESSAGES\n");
	printf("\tPhone Number\t\t\tNumber of Messages\n");

	printf("%d",phNumArr
	for(int i=0; i<4; i++){
		if(phNumArr[i][3] >= 100){
			for(int j=0; j<4; j++){
				printf("%d",phNumArr[i][j]);
				j++;
			}
		}
	}
	system("pause");
    return 0;
}
