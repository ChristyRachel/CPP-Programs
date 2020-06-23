/*
 * average.c
 *
 *  Created on: Jun. 22, 2020
 *      Author: christy
 */

#include <stdio.h>
#include <stdlib.h>
#include "function_lib.h"

int main()
{
	int i;
	float data[10];
	//initialize array with a size 10
	printf ( "Enter the elements in the array \n" );
	// to read the elements in the array
	for ( i = 0; i < 10; i++ )
		scanf ( "%f", &data[i] );
	size_t N = sizeof(data) / sizeof(data[0] );

	// to call the function and thereby print the largest element
	printf ( "Average of numbers in the array is %d \n",findAverage(data,N));

	// to exit
	return EXIT_SUCCESS;
}

