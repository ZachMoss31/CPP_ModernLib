#include <stdio.h>

#pragma region Sort-Independent
//IfExists just returns 1 if we find the integer in our array.
int IfExists(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return 1;
		}	
	}	
	return -1;
}

//Linear Searching...
//Worst:: O(N), best, O(1), average O(N).
void LinearSearch(int arr[], int size, int target) {
	int targCnt = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			printf("\nTarget %d found at [%d]. ", target, i);
			++targCnt;
			//Even though this case catches target, there may be more instances, so I keep looking...
		}
	}
	if (targCnt > 0) {
		return;
	}
	printf("\n%d not found in array.\n", target);

	printf("\n\n");
}

//Sentinel Linear Searching...
//Use while loop until arr[i] != target, which we have placed at end index.
	//Replace and check the end index afterward.
void SentLinearSearch(int arr[], int size, int target) {
	int targCnt = 0;

}

//Effectively counts down through array by searching from end of array to 0 recursively.
void LinearSearchRecursive(int arr[], int size, int target) {
	//Base case catch at size == 0.
	if (size == 0) {
		printf("\n%d not found in array.\n", target);
		return;
	}
	if (arr[size - 1] == target) {
		printf("\nTarget %d found recursively at [%d].", target, (size - 1));
		return;
	}
	LinearSearchRecursive(arr, (size - 1), target);
}

//Transposition technique, Hash-Table (best for frequent searches on larger information), MoveToFront
//Multi-Thread (both this and Hash-Table use C++)
#pragma endregion