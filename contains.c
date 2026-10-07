#include <stdio.h>

int contains(int item, int arr[], int size) {
	for(int i = 0; i < size; i++) {
		if(arr[i] == item){
			return 1;
		}
	}

	return 0;
}

int main() {
	int arr[] = {2, 9, 2, 0, 2, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int item = 5;
	// Call "contains" with an item of your choice, "arr", and the length of "arr".
	// Replace "0" in the following line with your function call
	int search = contains(item, arr, size); 
	printf("Result: %d\n", search);
	return 0;
}
