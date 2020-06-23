/*
 * function_lib.c
 *
 *  Created on: Jun. 22, 2020
 *      Author: christy
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_lib.h"

// function to find the largest value in the array.
int findAverage ( float *data, size_t N )
{
	int i;
	int average;
	int sum = data [0];

	for (i = 1; i < N; ++i)
		{
	        sum += data [i];
	    }

	    average = sum / N;

	/// to return the largest number
	return average;
}

