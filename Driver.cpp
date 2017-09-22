#include <stdio.h>																	//Including necessary header files
#include <iostream>
#include "mfactorial.h"
using namespace std;

void main() {																		//Driver
	mfactorial m1;																	//Object Creation
	double input1 = 0;																//using double for big values
	cout << "Mohid's Factorial Program" << endl;									
	cout << "Enter any number to find it's factorial: " << endl;
	cin >> input1;																	//Taking input from user
	double result = m1.factorial(input1);											//sending input to factorial function
	cout << " The Factorial of " << input1 << " is: " << result << endl;			//Showing Result
	getchar();
	getchar();
	getchar();
}