#include <stdio.h>
#include <stdlib.h>

void selectionsort(int dizi[], int size) {

	int i, j, temp, min_idx;
	for (i = 0; i < size - 1; i++) {
		min_idx = i; // Set i as min
		// find the minimum value in the list
		for (j = i; j < size; j++) {
			if (dizi[j] < dizi[min_idx]) {
				min_idx = j;
			}
		}
		// Swapping
		temp = dizi[i];   
		dizi[i] = dizi[min_idx];
		dizi[min_idx] = temp;
	}

}

void printing(int dizi[], int size) {
	
	for (int i = 0; i < size; i++) {
		printf("%d\n", dizi[i]);
		
	}

}

int main() {

	int dizi[] = { 9,8,7,6,5,4,3,2,1 };
	int size = sizeof(dizi) / sizeof(dizi[1]);
	selectionsort(dizi, size);
	printing(dizi, size);

	system("pause");
}
