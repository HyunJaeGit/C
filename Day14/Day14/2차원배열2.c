#include<stdio.h>

int main() {
	// ºó 2Â÷¿ø ¹è¿­

	int arr[4][5] = { 0 };

	arr[1][2] = 7;
	arr[3][3] = 12;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}





}