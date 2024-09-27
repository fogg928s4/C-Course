#include <stdio.h>


//function that sorts the order of the chars
//takes a pointer for the array
void swap(int* arr, int i, int j) {
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

 void bubbleSort(int arr[], int n) {
	 for (int i = 0; i < n - 1; i++) {
		for(int j=0; j < n - i -1; j++) {
			if(arr[j] > arr[j+1])
				swap(arr, j, j+1);
		}
	}
}

int main() {
	int arr[10] = {};
	puts("Enter the 10 numbers for the array");
	for (int k =0; k < 10; k++) {
		scanf("%d", &arr[k]);
	}
	//size of the array
	int n = sizeof(arr) / sizeof(arr[0]);

	bubbleSort(arr, n);
	puts("\nThe ordered array is: ");
	//then itll output the bubble sort result
	for (int k =0; k < 10; k++) {
		printf("%d ", arr[k]);
	}
	puts("\n");
	return 0;
}	
