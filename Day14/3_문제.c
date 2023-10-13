#include<stdio.h>
#define MAX 8

int main() {
	int arr[MAX][MAX] = { 0 };
	int count = 1;

	// 1¹ø
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			arr[i][j] = count++;

			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 2¹ø
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; j++) {
			printf("%2d ", arr[j][i]);
		}
		printf("\n");
	}
	printf("\n");

	// 3¹ø
	for (int i = 0; i < MAX; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < MAX; j++) {
				printf("%2d ", arr[i][j]);
			}
		}
		else {
			for (int j = MAX - 1; j >= 0; j--) {
				printf("%2d ", arr[i][j]);
			}
		}

		printf("\n");
	}
}