//Soliman, Sean
//Class - 439 Sp 2018
//at the end of the lab period part 1

// at the end of the lab period.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

//fill array
int someArr[10]={2,4,6,8,10,12,14,16,18,20};
int main()
{
	system("color f0");
    for(int i=0; i<10; i++){
		printf("%d ",someArr[i]);
	}
	printf("\n");
	system("pause");
    return 0;
}
