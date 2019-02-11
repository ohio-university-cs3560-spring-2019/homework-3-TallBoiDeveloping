/** \file */
#include <iostream>
#include <vector>
#include <cmath>
/**
*	/brief This funciton calculates the standard deviation for a preset array of integers
*	/param a : This is the array of values
*	/param n : This is the variables for the numerical values in the array
*	/return Returns the Standard Deviation
*/


double deviation( int* a, int n )
{	//initializes the sum to be 0
	double sum=0;
	//for loop that adds up all of the data in the array
	for(size_t i = 0; i <= n-1; i++)
	{
		sum += a[i];
	}
	//calculates the mean(average)
	double mean = sum /= n;
	//initializes the standard deviation to be 0
	double stddev = 0;
	//calculates the bulk of the standard deviation
	for(size_t i = 0; i <= n - 1; i++)
	{
		stddev += (a[i] - mean) * (a[i] - mean); 
	}
	//statement to see if there is an error and the standard deviation is 0
	if( stddev == 0)
		std::cout << "Sigma is zero." << std::endl;
	//sets value to return the final standard deviation
	double final = sqrt(stddev/n);
	//returns the answer to the calculation
	return final;
}
