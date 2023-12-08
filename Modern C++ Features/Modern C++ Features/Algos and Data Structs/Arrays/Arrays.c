#include <stdio.h>
#include "Algo.h"
#include "Search.h"


int main(int argc, char* argv[]) {

	//Create a program that takes in an arrary via command line,
	/*
	1) if () ask if you'd like to sort the array. [Y,N]
		what sort option?
	2) if () command line args count > 2, ask if you'd like to search for argv[2]
		what search option? 1
	*/

	//! Write up a Big O(n) for each sort / search,
	//  Write up a 'stable' version of each sort

	//! sizeof array:: SIZE = sizeof(arr)/sizeof(arr[0]); 
	int arr[] = { 10, 12, 23, 24, 16, 25, 21, 16, 1};
	int SIZE = (int)(sizeof(arr) / sizeof(arr[0]));
	int target = 16;

	printf("Original Array:: ");
	PrintArray(SIZE, arr);

	printf("The length of the array is %d.\n", SIZE);

	LinearSearch(arr, SIZE, target);

	float mean = arrMean(SIZE, arr);
	printf("\nThe mean of the array is %.2f.\n", mean);

	float stdDev = arrStandardDeviation(SIZE, arr);
	printf("\nThe standard deviation of the array is %.2f.\n", stdDev);

	printf("\nSquared Array:: ");
	SquareArray(SIZE, arr);
	PrintArray(SIZE, arr);

	int usrExt = 0;
	scanf("%d", usrExt);
	return 0;
}