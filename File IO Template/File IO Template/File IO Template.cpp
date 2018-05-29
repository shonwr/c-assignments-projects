// testthing.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

int main()
{
	/*
	//creating/writing (to) a file
	FILE *myFileObject;
	myFileObject = fopen("created.txt","a");

	if(myFileObject == NULL){
		fprintf(myFileObject, "error\n\n");
	}

	fprintf(myFileObject, "Did this work?");
	puts("File has finished creating/writing\n\n");

	fclose(myFileObject);
	*/

//******************************************************************

	//reading from a file
    FILE *myFile;
	myFile = fopen("created.txt", "r");
	char myCharArray[200];

	system("color f0");
	while(!feof(myFile)){
		fgets(myCharArray, 200, myFile);
		puts(myCharArray);
	}

	fclose(myFile);
	
	system("pause");
}
