//Soliman, Sean
//Class - 439 Sp 2018
//Using Structures

/*
Program that uses a defined structure and structure array 
*/

// Using Structures.cpp : main project file.

#include "stdafx.h"
#include <iostream>
//include structure header file
#include "myStruct.h"
using namespace System;
using namespace std; 

/*
This doesn't work... how do I get this to work?

int x;
struct Student students[x];
*/

void calculateAvg(struct Student students[3]);
int main()
{
	/*
	//prompt for # of students for array structure
	printf("Enter the ammount of students");
	scanf("%d",x);
	*/

	//structure array 
	struct Student students[3];
    system("color f0");
	
	for(int i=0; i<3; i++){
		//prompt for student name and store into structure 
		printf("\n****************************");
		printf("\nEnter students first name: ");
		scanf("%s",students[i].fName);
		
		//prompt for student name and store into structure 
		printf("\nEnter students last name: ");
		scanf("%s",students[i].lName);
		
		//prompt for student name and store into structure 
		for(int j=0;j<3;j++){
			printf("\nEnter student's grade %d: ",j+1);
			scanf("%f",&students[i].stuGrade[j]);
		}

		//calculate and store student avg grade
		students[i].avgGrade = ((students[i].stuGrade[0] + students[i].stuGrade[1] + students[i].stuGrade[2])/3);
	}

	system("cls");
	//pass structure array to function calculateAvg
	calculateAvg(students);
	printf("\n\n");
	system("pause");
    return 0;
}

void calculateAvg(struct Student students[3]){
	printf("Results");
	
	for(int i=0; i<3; i++){
		printf("\n\n%s\n",students[i].fName);
		printf("%s\n",students[i].lName);
		printf("%.02f\n",students[i].avgGrade);
		printf("***************************");
	}
}

