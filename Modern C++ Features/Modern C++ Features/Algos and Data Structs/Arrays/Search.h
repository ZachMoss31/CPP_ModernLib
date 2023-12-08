#include <stdio.h>

//Linear Searching...
//Worst:: O(N), best, O(1).
void LinearSearch(int arr[], int size, int target) {
	int targCnt = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			printf("\nTarget %d found at [%d]. ", target, i);
			++targCnt;
		}
	}
	if (targCnt > 0) {
		return;
	}
	printf("\n%d not found in array.\n", target);

	printf("\n\n");
}

//Sentinel Linear Searching...
void SentLinearSearch(int arr[], int size, int target) {
	int targCnt = 0;

}