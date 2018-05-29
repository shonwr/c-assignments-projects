// at the end of the lab period part 3.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;


int count = 0;
int arrDup[9];
int arrOne[9] = {1,3,5,7,22,41,65,9,18};
int arrTwo[19] = {2,4,5,6,7,8,11,12,18,7,22,16,19,41,42,44,55,62,65};
int main()
{
    system("color f0");
	for(int i=0; i<9; i++){
		for(int j=0; j<19; j++){
			if(arrOne[i] == arrTwo[j]){
				arrDup[count] = arrOne[i];
				count++;
			}
		}
	}

	printf("There are %d numbers in array 2 that exist in array1\n", count); 
	printf("The unduplicated list of these numbers are: \n");
	for(int i=0; i<count; i++){
		printf("%d, ", arrDup[i]);
	}
	printf("\n");
	system("pause");
    return 0;
}
