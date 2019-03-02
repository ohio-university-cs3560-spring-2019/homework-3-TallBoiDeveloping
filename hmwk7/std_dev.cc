/*********************
*Matt Albrinck
*CS 3560
*Homework 7 - Variadic Arguments (Standard Deviation Implementation File)
*3/2/19
**********************/

#include <cmath>
#include <cstdarg>
#include <vector>
#include <iostream>
#include "std_dev.h"

using namespace std;

double stddev(int n,...){
	if (n == 0){
		cout << "Can't compute, n is 0" << endl;
		exit(1);
	}

	//initializes the sum to be 0
	double sum = 0;

	//Variadic Arguments
	va_list args;
	va_start(args, n);

	//adds up inputed data
	int num;
	for(size_t i = 0; i < n; i++)
	{
		int total = va_arg(args, int);
		sum += total;
	}
	va_end(args);
	//Ends and start new Variadic arguments
	va_start(args, n);

	//calculates the mean(average)
	double mean = 0;
	mean = sum /= n;

	//initializes the standard deviation to be 0
	double variance = 0;
	//calculates the bulk of the standard deviation
	for(size_t i = 0; i < n; i++)
	{
		int x = va_arg(args, int);
		variance += (x - mean) * (x - mean);
	}

	va_end(args);
	//statement to see if there is an error and the standard deviation is 0
	if( variance == 0)
		std::cout << "Sigma is zero." << std::endl;

	//sets value to return the final standard deviation
	double final = sqrt(variance/n);

	//returns the answer to the calculation
	return final;

}
