//Soliman, Sean
//Class - 439 Sp 2018
//Arrays – Using Parallel arrays

/*
Program containing sorting (characters & numbers) and parallel Arrays 
*/

// Arrays Using Parallel arrays.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int main()
{
	system("color f0");
	char Stu[] = {'C', 'A', 'M', 'R', 'E', 'B'}; 
	char tempChar;
	int Grade1[] = {78, 86, 95, 100, 90, 87};
	int Grade2[] = {100, 89, 97, 100, 98, 0};
	int tempIntOne,tempIntTwo;
	
	//sort arrays
	for(int i=0; i<6; i++){
		for(int j=i+1; j<6; j++){
			if(Stu[i] > Stu[j]){
				//sort student array
				tempChar = Stu[i];
				Stu[i] = Stu[j];
				Stu[j] = tempChar;
				//sort Grade1 array
				tempIntOne = Grade1[i];
				Grade1[i] = Grade1[j];
				Grade1[j] = tempIntOne;
				//sort Grade2 array
				tempIntTwo = Grade2[i];
				Grade2[i] = Grade2[j];
				Grade2[j] = tempIntTwo;
			}
		}
	}

	//print out list
	printf("Student\tGrade1\tGrade2\n");
	for(int i=0; i<6; i++){
		printf("%c\t%d\t%d\n",Stu[i],Grade1[i],Grade2[i]);
	}
	system("pause");
    return 0;
}
	
