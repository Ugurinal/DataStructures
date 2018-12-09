#include <stdio.h>
#include <stdlib.h>

void bubblesort(int dizi[], int size) {

	int i, j, temp;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size - i - 1; j++) {
			if (dizi[j + 1] < dizi[j]) {
				temp = dizi[j + 1];
				dizi[j + 1] = dizi[j];
				dizi[j] = temp;
			}
		}
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
	bubblesort(dizi, size);
	printing(dizi, size);

	system("pause");
}
