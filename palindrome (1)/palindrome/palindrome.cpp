//Soliman, Sean
//Class - 439 Sp 2018
//Test 3 - Palindrome Project

/*
Program that determines if user input is a palindrome through a boolean-valued function. 
*/

// palindrome.cpp : main project file.

#include "stdafx.h"
#include <iostream>
using namespace System;
using namespace std;

bool IsPalindrome(char testString[]);

int main()
{
	char userTxt[50], ch;
	int i = 0;
	
    system("color f0");
	printf("Type and enter your text to determine whether or not it is a palindrome.\n");
	
	//scan for and remove any spaces and punctuation in entered string(array)
	while((ch = getchar()) != '\n'){
        if (!isspace(ch) && !ispunct(ch)){
            userTxt[i] = tolower(ch);
            i++;
        }
    }
	userTxt[i] = '\0';

	printf("***********************\n");
	printf("Result\n");
	printf("\Your converted text: %s\n\n",userTxt);
	IsPalindrome(userTxt);
	system("pause");
    return 0;
}


bool IsPalindrome(char testString[]){
	int count=0;

	for(int i=0; i<(int)strlen(testString); i++){
		if(testString[i] == testString[strlen(testString)-i-1]){
			count++;
		}else{
			continue;
		}
	}

	if(count == strlen(testString)){
		printf("Is(TRUE) a palindrome\n\n");
		return true;
	}else{
		printf("Is(FALSE) not a palindrome\n\n");
		return false;
	}
}

