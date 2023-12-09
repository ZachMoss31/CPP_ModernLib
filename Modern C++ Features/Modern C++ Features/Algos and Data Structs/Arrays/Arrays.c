#include <stdio.h>
#include "CMath.h"
#include "Search.h"


int main(int argc, char* argv[]) {

	//! sizeof array:: SIZE = sizeof(arr)/sizeof(arr[0]); 
	int arr[] = { 10, 12, 23, 24, 16, 25, 21, 16, 1};
	int SIZE = (int)(sizeof(arr) / sizeof(arr[0]));
	int target = 16;

	printf("Original Array:: ");
	PrintArray(SIZE, arr);

	printf("The length of the array is %d.\n", SIZE);

	//note that in classes we could just write arr.Exists();
	int exists = 0;
	exists = IfExists(arr, SIZE, target);
	printf("%d", exists);
	LinearSearch(arr, SIZE, target);
	LinearSearchRecursive(arr, SIZE, target);

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