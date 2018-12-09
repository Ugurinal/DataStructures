#include <stdio.h>
#include <stdlib.h>

void insertionsort(int dizi[], int size) {
	int i, j, min;
	for (i = 1; i < size; i++) {
		min = dizi[i];
		j = i - 1;
		while (j >= 0 && dizi[j] > min) {
			dizi[j + 1] = dizi[j];
			j--;
		}
		dizi[j + 1] = min;
	}

}

void printing(int dizi[], int size) {
	int i = 0;
	while (i < size) {
		printf("%d\n", dizi[i]);

		i++;
	}

}

int main(void) {

	int dizi[] = { 9,8,7,4,5,6,3,2,1 };
	int size = sizeof(dizi) / sizeof(dizi[1]);
	insertionsort(dizi, size);
	printing(dizi, size);


	system("pause");

}
