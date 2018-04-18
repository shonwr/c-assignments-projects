//Soliman, Sean   
//Class - 439 Sp 2018
//WK 5 - Professor Kubicki

// Professor Kubicki.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int friends = 5;
int main()
{
	//test
	system("color f0");
	printf("Professor Kubicki's # of friends\n");
	printf("********************************\n\n");
	//Count til exeeds Dunbar's # (150) = 151
	for(int i=1; i<=151; i++){
		friends -= i;
		friends = friends * 2;
		if(friends >= 151){
			printf("week %d: *Exceeds Dunbar's #*\n", i);
			printf("********************************\n\n");
			break;
		}
		printf("Week %d: %d\n",i, friends);
	}
    system("pause");
    return 0;
}
