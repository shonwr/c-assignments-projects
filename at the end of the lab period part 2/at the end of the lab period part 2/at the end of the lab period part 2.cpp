//Soliman, Sean
//Class - 439 Sp 2018
//at the end of the lab period part 2

// at the end of the lab period part 2.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

//fill array
int someArr[10]={1,4,5,11,7,15};
int temp = 0;
int main(){
	system("color f0");
    for(int i=0; i<10; i++){
		if(temp>someArr[i]){
			printf("%d \n",someArr[i]);
			printf("Error, data out of sequence: %d", someArr[i]);
			break;
		}
		printf("%d ",someArr[i]);
		temp = someArr[i];
	}
	printf("\n\nProgram is stopping\n\n");
	system("pause");
    return 0;
}
