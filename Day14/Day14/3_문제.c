#include<stdio.h>
#define max 8

int main() {

	int xy[max][max] = { 0 };
	int n = 1;


	// 2¹ø
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {
			xy[i][j] = n++;

			printf("%2d ", xy[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// 2¹ø
	for (int i = 0; i < max; i++) {
		for (int j = 0; j < max; j++) {


			printf("%2d ", xy[j][i]);
		}
		printf("\n");
	}printf("\n");


	// 3¹ø
	int i, j;

		for (i = 0; i < max; i++) {
			if (i % 2 == 0) {
				for (j = 0; j < max; j++) {
					printf("%2d ", xy[i][j]);
				}
			}
			else {
				for (j = max-1; j >=0; j--) {
					printf("%2d ", xy[i][j]);
				}

			}
			printf("\n");
		}printf("\n");
}


