// file io test.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;
int main()
{
	int scanNum[10];
	char myChar[10][2];
    
	FILE * myFile;
	//creates a txt file called "test", r+ = mode 
	//r+ might create error if file already not created?
	myFile = fopen("Test.txt","r+");

//writing into a text file
	/*
	prints into test.txt 
	This is iteration 1
	This is iteration 2
	This is iteration 3
	This is iteration 4
	This is iteration 5
	This is iteration 6
	This is iteration 7 
	This is iteration 8
	This is iteration 9
	This is iteration 10
	*/
	for(int i=0; i<10; i++){
			fprintf(myFile, "This is iteration %d\n",i+1);
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//reading the file into an array to modify

	rewind(myFile);
	printf("Reading only numbers from file result: \n\n");
	for(int i=0; i<10; i++){
		//%*s reads & skips string up to space or newline
		//stores numbers from txt file into scanNum array 
		fscanf(myFile, "%*s %*s %*s %d",&scanNum[i]);
		printf("%d\n", scanNum[i]);
	}
	printf("\n\n*****************************************\n\n");

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//modifying content read into array
	char modified[300];

	rewind(myFile);
	printf("Reading modified text from file result: \n\n");
	//replace number at index 3 of scanNum array with 12
	scanNum[3] = 12;
	for(int i=0; i<10; i++){
		fprintf(myFile, "This is iteration %d\n", scanNum[i]);
	}
	//read back newly modified file
	rewind(myFile);
	while(!feof(myFile)){
		fgets(modified, 300, myFile);
		puts(modified);
	}
	
	fclose(myFile);
	system("pause");
    return 0;
}
