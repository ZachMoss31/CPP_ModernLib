#include <math.h>

int SquareNum(int n) {
	return n * n;
}

void SquareArray(int arrSize, int arr[]) {
	for (int i = 0; i < arrSize; i++) {
		arr[i] = SquareNum(arr[i]);
	}
}

float arrMean(int arrSize, int arr[]) {
	int mean = 0;
	for (int i = 0; i < arrSize; i++) {
		mean += arr[i];
	}
	float meanf = ((float)mean/arrSize);
	return meanf;
}

float arrMedian(int arrSize, int arr[]) {
	//We first need to sort the array so we can get the middle number
	//We need to check if the array is even, if n%2 == 0 then we need 
		//the two mid numbers and divided.
}

float arrMode(int arrSize, int arr[]) {
	//This would best be served with a dictionary, the the number as the key,
	  //and the count as the value. 
}

float arrStandardDeviation(int arrSize, int arr[]) {
	//First we need the average
	float mean = arrMean(arrSize, arr);
	float variance = 0.0f;
	int temp[arrSize];
	for (int i = 0; i < arrSize; i++) {
		temp[i] = arr[i] - mean;
		temp[i] *= temp[i];
		variance += temp[i];
	}
	variance /= (arrSize - 1);

	//eventually build my own square root here
	return sqrt(variance);
}

int CubeNum(int n) {
	return (n * n * n);
}

void CubeArray(int arrSize, int arr[]) {
	for (int i = 0; i < arrSize; i++) {
		arr[i] = CubeNum(arr[i]);
	}
}

void PrintArray(int arrSize, int arr[]) {
	printf("{");
	for (int i = 0; i < arrSize; i++) {
		if (i == arrSize - 1) {
			printf("%d", arr[i]);
		}
		else {
			printf("%d, ", arr[i]);
		}
	}
	printf("}\n\n");
}